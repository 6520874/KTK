#include "platform/CCPlatformConfig.h"
#include "TextManager.h"
#include <fstream>
#include <string>
#include <unordered_map>
#include <utility>
#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
#include <codecvt>
#endif
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
#include "NDK_iconv.h"
#endif

using std::string;
using std::ifstream;
using std::unordered_map;
using std::hash;
using std::make_pair;
using std::getline;

TextManager::TextManager() {
	cardDescription.insert(make_pair("���Ӳ���", "���ƽ׶Σ��Գ�����������һ����ɫʹ�á������ý�ɫ��һ���ơ�"));
	cardDescription.insert(make_pair("�赶ɱ��", "���ƽ׶Σ��Գ����⣬װ�������������Ƶ�һ����ɫʹ�á��ý�ɫ����乥����Χ�ڣ���ָ������һ����ɫʹ��һ�š�ɱ�����������������㡣"));
	cardDescription.insert(make_pair("����", "���ƽ׶Σ��Գ�����������һ����ɫʹ�á��ɸý�ɫ��ʼ���������һ�š�ɱ�������Ȳ�����ɱ����һ���ܵ�"));
	cardDescription.insert(make_pair("�ֲ�˼��", "���ƽ׶Σ��Գ���������һ����ɫʹ�á������ֲ�˼�񡿺����ڸý�ɫ���ж�������ж������Ϊ�����ҡ����������ý�ɫ���ƽ׶Ρ�"));
	cardDescription.insert(make_pair("��������", "���ƽ׶Σ��Գ�����������н�ɫʹ�á�Ŀ���ɫ��һ�δ��һ�š�ɱ��������ý�ɫ�ܵ�"));
	cardDescription.insert(make_pair("����", "���ƽ׶Σ�����ʹ�á��������硿����������ж�������ж����Ϊ�����ҡ�"));
	cardDescription.insert(make_pair("˳��ǣ��", "���ƽ׶Σ��Գ������⣬�������"));
	cardDescription.insert(make_pair("��԰����", "���ƽ׶Σ������н�ɫʹ�á����ظ�"));
	cardDescription.insert(make_pair("����뷢", "���ƽ׶Σ��Գ�����������н�ɫʹ�á�Ŀ���ɫ�����δ��һ�š�����������ý�ɫ�ܵ�"));
	cardDescription.insert(make_pair("��и�ɻ�", "����������ң���Чʱ����������һ�������ɵ�Ӱ�졣"));
	cardDescription.insert(make_pair("��������", "���ƽ׶Σ������Լ�ʹ�á��������ơ�"));
	cardDescription.insert(make_pair("��ȷ��", "���ƽ׶Σ������н�ɫʹ�á�����ƶ�������ͬ���ִ��ɫ�������ƣ�Ŀ���ɫ����ѡ�񲢻�����е�һ�š�"));
	cardDescription.insert(make_pair("������", "���Լ����������ʱ�����ж�����Ϊ��ɫ��ɫ�����Ч�ڳ���һ�š�������"));
	cardDescription.insert(make_pair("������", "����������ɫ�ġ�ɱ��������Ч��"));
	cardDescription.insert(make_pair("����˫�ɽ�", "�á�ɱ���������Խ�ɫʱ���Է�������ѡ��1.����һ������"));
	cardDescription.insert(make_pair("���컭�", "������ġ�ɱ�������һ������ʱ���ɹ����������������Χ�ڵ���ҡ�"));
	cardDescription.insert(make_pair("��ʯ��", "�á�ɱ���������Է����ܺ󣬿���������ǿ�����С�"));
	cardDescription.insert(make_pair("���빭", "�á�ɱ���������к󣬶Է�����һƥ��װ������"));
	cardDescription.insert(make_pair("���G��", "�ô����������������ӶԷ��ķ��ߡ�"));
	cardDescription.insert(make_pair("�������µ�", "�á�ɱ������ʱ��ֻҪ�Է������������ܣ�����ٳ���ɱ������������"));
	cardDescription.insert(make_pair("�ɰ���ì", "���������������Ƶ���ɱ��ʹ�á�"));
	cardDescription.insert(make_pair("�������", "һ�غ��ڿ��Գ������š�ɱ����"));
	cardDescription.insert(make_pair("������", "�á�ɱ�������ɹ��󣬿�ѡ����ɶԷ����˺������������Է������ơ�"));

	skillDescription.insert(make_pair("����", "�����������ö�������˺����ơ�"));
	skillDescription.insert(make_pair("����", "��������κ��������ɫ�����������������"));
	skillDescription.insert(make_pair("���", "������ж�����Ч������������������"));
	skillDescription.insert(make_pair("�ż�", "��ÿ�ܵ�1���˺������������ƣ�������һ�Ž�������һ����ɫ��Ȼ����һ�Ž�������һ����ɫ��"));
	skillDescription.insert(make_pair("����", "����������Ӷ�������˺�����Դ�����һ���ơ�"));
	skillDescription.insert(make_pair("���", "�������ɫ���ж�����Чǰ������Դ��һ�����ƴ���֮��"));
	skillDescription.insert(make_pair("����", "��ÿ�ܵ�һ���˺����ɽ���һ���ж����������Ϊ�����ҡ�����Ŀ����Դ������ж�ѡһ�����������ƻ��ܵ��������ɵ�1���˺���"));
	skillDescription.insert(make_pair("����", "���ƽ׶Σ����������һ���ƣ�����������ûغϵĳ��ƽ׶Σ���ʹ�á�ɱ���򡾾���������Ϊ�˺���Դʱ����ɵ��˺�+1��"));
	skillDescription.insert(make_pair("ͻϮ", "���ƽ׶Σ�����Է������ƣ�Ȼ�����������������һ������ɫ����������ĳ�ȡһ���ơ�"));
	skillDescription.insert(make_pair("���", "����Խ���ġ���ɫ�����Ƶ�������ʹ�û�����"));
	skillDescription.insert(make_pair("����", "�غϿ�ʼ�׶Σ�����Խ����ж�����Ϊ����ɫ���ƣ�������ô��ƣ��������ٴ�ʹ�����񡪡���˷�����ֱ�����֡���ɫ����Ϊֹ��"));
	skillDescription.insert(make_pair("����", "����Խ������Ƶġ�ɱ����������������������ɱ��ʹ�û�����"));
	skillDescription.insert(make_pair("�ʵ�", "���ƽ׶Σ�����Խ�����������������������䷽ʽ����������ɫ������һ������������������������ʱ����ظ�1��������"));
	skillDescription.insert(make_pair("����", "����������������ɫ�����������ɱ����"));
	skillDescription.insert(make_pair("��ʥ", "����Խ��������һ�š���ɫ���Ƶ���ɱ��ʹ�û�����"));
	skillDescription.insert(make_pair("����", "ÿ����ʹ��һ�ŷ���ʱ�����ʱ������������֮ǰ�������������һ���ơ�"));
	skillDescription.insert(make_pair("���", "��ʹ���κν����޾������ơ�"));
	skillDescription.insert(make_pair("����", "�����������������������ɫ�ľ���ʱ��ʼ��-1��"));
	skillDescription.insert(make_pair("����", "����ʹ�á�ɱ��ָ��һ����ɫΪĿ�������Խ����ж��������Ϊ����ɫ�����ˡ�ɱ�����ɱ����ܡ�"));
	skillDescription.insert(make_pair("����", "���ƽ׶Σ������ʹ�������ġ�ɱ����"));
	skillDescription.insert(make_pair("����", "�غϿ�ʼ�׶Σ�����Թۿ��ƶѶ���X���ƣ�XΪ����ɫ�����������Ϊ5��������������˳�������ƶѶ�������������˳�������ƶѵס�"));
	skillDescription.insert(make_pair("�ճ�", "������������û������ʱ���㲻�ܳ�Ϊ��ɱ���򡾾�������Ŀ�ꡣ"));
	skillDescription.insert(make_pair("��ɫ", "���ƽ׶Σ�����Խ�������⡾���顿��ɫ���Ƶ����ֲ�˼��ʹ�á�"));
	skillDescription.insert(make_pair("����", "�����Ϊ��ɱ����Ŀ��ʱ���������һ���ƣ����ˡ�ɱ��ת�Ƹ��㹥����Χ�ڵ���һ����ɫ�����ý�ɫ�����ǡ�ɱ����ʹ���ߣ���"));
	skillDescription.insert(make_pair("��Ϯ", "���ƽ׶Σ�����Խ��������һ�š���ɫ���Ƶ������Ӳ��š�ʹ�á�"));
	skillDescription.insert(make_pair("����", "���ƽ׶Σ������ʧȥһ��������Ȼ���������ơ�ÿ�غ��У�����Զ��ʹ�ÿ��⡣"));
	skillDescription.insert(make_pair("ǫѷ", "���������㲻�ܳ�Ϊ��˳��ǣ�򡿺͡��ֲ�˼�񡿵�Ŀ�ꡣ"));
	skillDescription.insert(make_pair("��Ӫ", "ÿ����ʧȥ���һ������ʱ����������һ���ơ�"));
	skillDescription.insert(make_pair("�˼�", "�����ڳ��ƽ׶�δʹ�û������κ�һ�š�ɱ��������������˻غϵ����ƽ׶Ρ�"));
	skillDescription.insert(make_pair("�ƺ�", "���ƽ׶Σ���������������������ƣ�Ȼ����ȡ�������ƣ�ÿ�غ�����һ�Ρ�"));
	skillDescription.insert(make_pair("��Ԯ", "����������������������������ɫ�������״̬�¶���ʹ�á��ҡ�ʱ�������ظ�1��������"));
	skillDescription.insert(make_pair("����", "���ƽ׶Σ���������������Ʋ�ָ��һ�����˵����Խ�ɫ����͸ý�ɫ���ظ�1��������ÿ�غ�����һ�Ρ�"));
	skillDescription.insert(make_pair("�ɼ�", "����ʧȥһ��װ���������ʱ������������������ơ�"));
	skillDescription.insert(make_pair("Ӣ��", "���ƽ׶Σ�����Զ�����һ���ơ�"));
	skillDescription.insert(make_pair("����", "���ƽ׶Σ������ָ����һ����ɫѡ��һ�ֻ�ɫ����ȡ���һ�����Ʋ�����������������ѡ��ɫ���Ǻϣ�����Ըý�ɫ���1���˺���Ȼ���۽�����ý�ɫ����ô��ơ�ÿ�غ�����һ�Ρ�"));
	skillDescription.insert(make_pair("���", "���ƽ׶Σ��������һ���Ʋ�ѡ���������Խ�ɫ�������������Ϊ����һ����ɫ����һ����ɫʹ��һ�š����������ˡ����������ܱ�����и�ɻ�����Ӧ����ÿ�غ�����һ�Ρ�"));
	skillDescription.insert(make_pair("����", "�غϽ����׶Σ��������һ���ơ�"));
	skillDescription.insert(make_pair("����", "��Ļغ��⣬����Խ�������⡾��ɫ���Ƶ����ҡ�ʹ�á�"));
	skillDescription.insert(make_pair("����", "���ƽ׶Σ��������������һ�����ƣ�����һ��ɫ�ظ�1��������ÿ�غ�����һ�Ρ�"));
	skillDescription.insert(make_pair("��˫", "����������ʹ�á�ɱ��ʱ��Ŀ���ɫ������ʹ�����š��������ܵ�����������С��������Ľ�ɫÿ��������������š�ɱ����"));
}

const string TextManager::gbkToUtf8(const string & str) {
#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
	using Codecvt = std::codecvt_byname<wchar_t, char, std::mbstate_t>;
	const char * GBK_LOCAL_NAME = ".936";	//win��GBK�����Ӧ�Ĵ���ҳ��
	std::wstring_convert<Codecvt> conv1(new Codecvt(GBK_LOCAL_NAME));
	std::wstring temp_wstr = conv1.from_bytes(str);
	std::wstring_convert<std::codecvt_utf8<wchar_t>> conv2;
	string utf8Str = conv2.to_bytes(temp_wstr);
	return utf8Str;
#endif

#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
	return GBK(str.c_str()).toUtf8();
#endif

}

const string TextManager::gbkToUtf8(const char * str) {
	return gbkToUtf8(string(str));
}

const std::string TextManager::intToString(int number) {
	std::string str;
	while (number != 0) {
		str += '0' + number % 10;
		number /= 10;
	}
	str.reserve();
	return str;
}

const string TextManager::getTextOfCharName(ECharName name) const {
	switch (name) {
		case ECharName::CAOCAO: return gbkToUtf8("�ܲ�"); break;
		case ECharName::DAQIAO: return gbkToUtf8("����"); break;
		case ECharName::DIAOCHAN: return gbkToUtf8("����"); break;
		case ECharName::GANNING: return gbkToUtf8("����"); break;
		case ECharName::GUANYU: return gbkToUtf8("����"); break;
		case ECharName::GUOJIA: return gbkToUtf8("����"); break;
		case ECharName::HUANGGAI: return gbkToUtf8("�Ƹ�"); break;
		case ECharName::HUANGYUEYING: return gbkToUtf8("����Ӣ"); break;
		case ECharName::HUATUO: return gbkToUtf8("��٢"); break;
		case ECharName::LIUBEI: return gbkToUtf8("����"); break;
		case ECharName::LUXUN: return gbkToUtf8("½ѷ"); break;
		case ECharName::LVBU: return gbkToUtf8("����"); break;
		case ECharName::LVMENG: return gbkToUtf8("����"); break;
		case ECharName::MACHAO: return gbkToUtf8("��"); break;
		case ECharName::SIMAYI: return gbkToUtf8("˾��ܲ"); break;
		case ECharName::SUNSHANGXIANG: return gbkToUtf8("������"); break;
		case ECharName::XIAHOUDUN: return gbkToUtf8("�ĺ"); break;
		case ECharName::SUNQUAN: return gbkToUtf8("��Ȩ"); break;
		case ECharName::XUZHU: return gbkToUtf8("����"); break;
		case ECharName::ZHANGFEI: return gbkToUtf8("�ŷ�"); break;
		case ECharName::ZHANGLIAO: return gbkToUtf8("����"); break;
		case ECharName::ZHAOYUN: return gbkToUtf8("����"); break;
		case ECharName::ZHENJI: return gbkToUtf8("�缧"); break;
		case ECharName::ZHOUYU: return gbkToUtf8("���"); break;
		case ECharName::ZHUGELIANG: return gbkToUtf8("�����"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getStringOfCharName(ECharName name) const {
	switch (name) {
		case ECharName::CAOCAO: return "CAOCAO"; break;
		case ECharName::DAQIAO: return "DAQIAO"; break;
		case ECharName::DIAOCHAN: return "DIAOCHAN"; break;
		case ECharName::GANNING: return "GANNING"; break;
		case ECharName::GUANYU: return "GUANYU"; break;
		case ECharName::GUOJIA: return "GUOJIA"; break;
		case ECharName::HUANGGAI: return "HUANGGAI"; break;
		case ECharName::HUANGYUEYING: return "HUANGYUEYING"; break;
		case ECharName::HUATUO: return "HUATUO"; break;
		case ECharName::LIUBEI: return "LIUBEI"; break;
		case ECharName::LUXUN: return "LUXUN"; break;
		case ECharName::LVBU: return "LVBU"; break;
		case ECharName::LVMENG: return "LVMENG"; break;
		case ECharName::MACHAO: return "MACHAO"; break;
		case ECharName::SIMAYI: return "SIMAYI"; break;
		case ECharName::SUNSHANGXIANG: return "SUNSHANGXIANG"; break;
		case ECharName::XIAHOUDUN: return "XIAHOUDUN"; break;
		case ECharName::SUNQUAN: return "SUNQUAN"; break;
		case ECharName::XUZHU: return "XUZHU"; break;
		case ECharName::ZHANGFEI: return "ZHANGFEI"; break;
		case ECharName::ZHANGLIAO: return "ZHANGLIAO"; break;
		case ECharName::ZHAOYUN: return "ZHAOYUN"; break;
		case ECharName::ZHENJI: return "ZHENJI"; break;
		case ECharName::ZHOUYU: return "ZHOUYU"; break;
		case ECharName::ZHUGELIANG: return "ZHUGELIANG"; break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfCardName(ECardName name) const {
	switch (name) {
		case ECardName::ALLOUTOFNONE: return gbkToUtf8("��������"); break;
		case ECardName::ARROWRAIN: return gbkToUtf8("����뷢"); break;
		case ECardName::BAGUARANK: return gbkToUtf8("������"); break;
		case ECardName::CHITU: return gbkToUtf8("����"); break;
		case ECardName::COUPLESWORDS: return gbkToUtf8("����˫�ɽ�"); break;
		case ECardName::DAWAN: return gbkToUtf8("����"); break;
		case ECardName::DILU: return gbkToUtf8("��¬"); break;
		case ECardName::DODGE: return gbkToUtf8("��"); break;
		case ECardName::DRAGONBROADSWORD: return gbkToUtf8("�������µ�"); break;
		case ECardName::DROWNINHAPPINESS: return gbkToUtf8("�ֲ�˼��"); break;
		case ECardName::DUEL: return gbkToUtf8("����"); break;
		case ECardName::FLAWLESSDEFENSE: return gbkToUtf8("��и�ɻ�"); break;
		case ECardName::GUANSHIAXE: return gbkToUtf8("��ʯ��"); break;
		case ECardName::HARVEST: return gbkToUtf8("��ȷ��"); break;
		case ECardName::ICESWORD: return gbkToUtf8("������"); break;
		case ECardName::JUEYING: return gbkToUtf8("��Ӱ"); break;
		case ECardName::JUSTICESHIELD: return gbkToUtf8("������"); break;
		case ECardName::KYLINBOW: return gbkToUtf8("���빭"); break;
		case ECardName::LIGHTNING: return gbkToUtf8("����"); break;
		case ECardName::MURDERWITHBORROWEDWEAPON: return gbkToUtf8("�赶ɱ��"); break;
		case ECardName::OATHLNPEACHGARDEN: return gbkToUtf8("��԰����"); break;
		case ECardName::PEACH: return gbkToUtf8("��"); break;
		case ECardName::SABOTAGE: return gbkToUtf8("���Ӳ���"); break;
		case ECardName::SLASH: return gbkToUtf8("ɱ"); break;
		case ECardName::SNAKESPEAR: return gbkToUtf8("�ɰ���ì"); break;
		case ECardName::SOUTHLNVASION: return gbkToUtf8("��������"); break;
		case ECardName::THEFT: return gbkToUtf8("˳��ǣ��"); break;
		case ECardName::TRIPLEHALBERD: return gbkToUtf8("���컭�"); break;
		case ECardName::TSINGGANGSWORD: return gbkToUtf8("���G��"); break;
		case ECardName::ZHUAHUANGFEIDIAN: return gbkToUtf8("צ�Ʒɵ�"); break;
		case ECardName::ZHUGECROSSBOW: return gbkToUtf8("�������"); break;
		case ECardName::ZIXING: return gbkToUtf8("���H"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getStringOfCardName(ECardName name) const {
	switch (name) {
		case ECardName::ALLOUTOFNONE: return "ALLOUTOFNONE"; break;
		case ECardName::ARROWRAIN: return "ARROWRAIN"; break;
		case ECardName::BAGUARANK: return "BAGUARANK"; break;
		case ECardName::COUPLESWORDS: return "COUPLESWORDS"; break;
		case ECardName::DODGE: return "DODGE"; break;
		case ECardName::DRAGONBROADSWORD: return "DRAGONBROADSWORD"; break;
		case ECardName::DROWNINHAPPINESS: return "DROWNLNHAPPINESS"; break;
		case ECardName::DUEL: return "DUEL"; break;
		case ECardName::FLAWLESSDEFENSE: return "FLAWLESSDEFENSE"; break;
		case ECardName::GUANSHIAXE: return "GUANSHIAXE"; break;
		case ECardName::HARVEST: return "HARVEST"; break;
		case ECardName::ICESWORD: return "ICESWORD"; break;
		case ECardName::JUSTICESHIELD: return "JUSTICESHIELD"; break;
		case ECardName::KYLINBOW: return "KYLINBOW"; break;
		case ECardName::LIGHTNING: return "LIGHTNING"; break;
		case ECardName::MURDERWITHBORROWEDWEAPON: return "MURDERWITHBORROWEDWEAPON"; break;
		case ECardName::OATHLNPEACHGARDEN: return "OATHLNPEACHGARDEN"; break;
		case ECardName::PEACH: return "PEACH"; break;
		case ECardName::SABOTAGE: return "SABOTAGE"; break;
		case ECardName::SLASH: return "SLASH"; break;
		case ECardName::SNAKESPEAR: return "SNAKESPEAR"; break;
		case ECardName::SOUTHLNVASION: return "SOUTHLNVASION"; break;
		case ECardName::THEFT: return "THEFT"; break;
		case ECardName::TRIPLEHALBERD: return "TRIPLEHALBERD"; break;
		case ECardName::TSINGGANGSWORD: return "TSINGGANGSWORD"; break;
		case ECardName::ZHUGECROSSBOW: return "ZHUGECROSSBOW"; break;
		case ECardName::JUEYING: return "JUEYING"; break;
		case ECardName::ZHUAHUANGFEIDIAN: return "ZHUAHUANGFEIDIAN"; break;
		case ECardName::DILU: return "DILU"; break;
		case ECardName::ZIXING: return "ZIXING"; break;
		case ECardName::CHITU: return "CHITU"; break;
		case ECardName::DAWAN: return "DAWAN"; break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfSkillName(ESkillName name) const {
	switch (name) {
		case ESkillName::BIYUE: return gbkToUtf8("����"); break;
		case ESkillName::FANJIAN: return gbkToUtf8("����"); break;
		case ESkillName::FANKUI: return gbkToUtf8("����"); break;
		case ESkillName::GANGLIE: return gbkToUtf8("����"); break;
		case ESkillName::GUANXING: return gbkToUtf8("����"); break;
		case ESkillName::GUICAI: return gbkToUtf8("���"); break;
		case ESkillName::GUOSE: return gbkToUtf8("��ɫ"); break;
		case ESkillName::HUJIA: return gbkToUtf8("����"); break;
		case ESkillName::JIANXIONG: return gbkToUtf8("����"); break;
		case ESkillName::JIEYIN: return gbkToUtf8("����"); break;
		case ESkillName::JIJIANG: return gbkToUtf8("����"); break;
		case ESkillName::JIJIU: return gbkToUtf8("����"); break;
		case ESkillName::JIUYUAN: return gbkToUtf8("��Ԯ"); break;
		case ESkillName::JIZHI: return gbkToUtf8("����"); break;
		case ESkillName::KEJI: return gbkToUtf8("�˼�"); break;
		case ESkillName::KONGCHENG: return gbkToUtf8("�ճ�"); break;
		case ESkillName::KUROU: return gbkToUtf8("����"); break;
		case ESkillName::LIANYING: return gbkToUtf8("��Ӫ"); break;
		case ESkillName::LIJIAN: return gbkToUtf8("���"); break;
		case ESkillName::LIULI: return gbkToUtf8("����"); break;
		case ESkillName::LONGDAN: return gbkToUtf8("����"); break;
		case ESkillName::LUOSHEN: return gbkToUtf8("����"); break;
		case ESkillName::LUOYI: return gbkToUtf8("����"); break;
		case ESkillName::MASHU: return gbkToUtf8("����"); break;
		case ESkillName::PAOXIAO: return gbkToUtf8("����"); break;
		case ESkillName::QIANXUN: return gbkToUtf8("ǫѷ"); break;
		case ESkillName::QICAI: return gbkToUtf8("���"); break;
		case ESkillName::QINGGUO: return gbkToUtf8("���"); break;
		case ESkillName::QINGNANG: return gbkToUtf8("����"); break;
		case ESkillName::QIXI: return gbkToUtf8("��Ϯ"); break;
		case ESkillName::RENDE: return gbkToUtf8("�ʵ�"); break;
		case ESkillName::TIANDU: return gbkToUtf8("���"); break;
		case ESkillName::TIEJI: return gbkToUtf8("����"); break;
		case ESkillName::TUXI: return gbkToUtf8("ͻϮ"); break;
		case ESkillName::WUSHENG: return gbkToUtf8("��ʥ"); break;
		case ESkillName::WUSHUANG: return gbkToUtf8("��˫"); break;
		case ESkillName::XIAOJI: return gbkToUtf8("�ɼ�"); break;
		case ESkillName::YIJI: return gbkToUtf8("�ż�"); break;
		case ESkillName::YINGZI: return gbkToUtf8("Ӣ��"); break;
		case ESkillName::ZHIHENG: return gbkToUtf8("�ƺ�"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getTextOfForce(ECharForce name) const {
	switch (name) {
		case ECharForce::WEI: return gbkToUtf8("κ"); break;
		case ECharForce::SHU: return gbkToUtf8("��"); break;
		case ECharForce::WU: return gbkToUtf8("��"); break;
		case ECharForce::QUN: return gbkToUtf8("Ⱥ"); break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfCardDescription(ECardName name) const {
	return cardDescription.at(getTextOfCardName(name)).c_str();
}

const string TextManager::getTextOfSkillDescription(ESkillName name) const {
	return skillDescription.at(getTextOfSkillName(name)).c_str();
}

const string TextManager::getTextOfSuit(ECardSuit suit) const {
	switch (suit) {
		case ECardSuit::HEART: return gbkToUtf8("����"); break;
		case ECardSuit::CLUB: return gbkToUtf8("÷��"); break;
		case ECardSuit::DIAMOND: return gbkToUtf8("����"); break;
		case ECardSuit::SPADE: return gbkToUtf8("����"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getStringOfSuit(ECardSuit suit) const {
	switch (suit) {
		case ECardSuit::CLUB: return "CLUB"; break;
		case ECardSuit::DIAMOND: return "DIAMOND"; break;
		case ECardSuit::HEART: return "HEART"; break;
		case ECardSuit::SPADE: return "SPADE"; break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfColorName(ECardColor color) const {
	switch (color) {
		case ECardColor::RED: return gbkToUtf8("��ɫ"); break;
		case ECardColor::BLACK: return gbkToUtf8("��ɫ"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getTextOfNumber(int number) const {
	switch (number) {
		case 1: return gbkToUtf8("A"); break;
		case 2: return gbkToUtf8("2"); break;
		case 3: return gbkToUtf8("3"); break;
		case 4: return gbkToUtf8("4"); break;
		case 5: return gbkToUtf8("5"); break;
		case 6: return gbkToUtf8("6"); break;
		case 7: return gbkToUtf8("7"); break;
		case 8: return gbkToUtf8("8"); break;
		case 9: return gbkToUtf8("9"); break;
		case 10: return gbkToUtf8("10"); break;
		case 11: return gbkToUtf8("J"); break;
		case 12: return gbkToUtf8("Q"); break;
		case 13: return gbkToUtf8("K"); break;
		default: throw "Can't find match!"; break;
	}
}
