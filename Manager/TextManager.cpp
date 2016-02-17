#include "TextManager.h"
#include <codecvt>
#include <fstream>
#include <string>
#include <unordered_map>
#include <utility>

using std::string;
using std::ifstream;
using std::unordered_map;
using std::hash;
using std::make_pair;
using std::getline;

TextManager::TextManager() {
	//card.dat��skill.dat�ļ��Ѿ�ΪUTF-8����
	ifstream cardInput("card.dat");
	if (!cardInput) throw "Can't find card.dat!";
	while (cardInput) {
		string str1, str2;
		cardInput >> str1;
		getline(cardInput, str2);
		cardDescription.insert(make_pair(str1, str2));
	}

	ifstream skillInput("skill.dat");
	if (!skillInput) throw "Can't find skill.dat!";
	while (skillInput) {
		string str1, str2;
		skillInput >> str1;
		getline(skillInput, str2);
		skillDescription.insert(make_pair(str1, str2));
	}
}

const string TextManager::gbkToUtf8(const string & gbkStr) {
	using Codecvt = std::codecvt_byname<wchar_t, char, std::mbstate_t>;
	const char * GBK_LOCAL_NAME = ".936";	//win��GBK�����Ӧ�Ĵ���ҳ��
	std::wstring_convert<Codecvt> conv1(new Codecvt(GBK_LOCAL_NAME));
	std::wstring temp_wstr = conv1.from_bytes(gbkStr);
	std::wstring_convert<std::codecvt_utf8<wchar_t>> conv2;
	string utf8Str = conv2.to_bytes(temp_wstr);
	return utf8Str;
}

const string TextManager::gbkToUtf8(const char * gbkStr) {
	return gbkToUtf8(string(gbkStr));
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
		case ECardName::DROWNLNHAPPINESS: return gbkToUtf8("�ֲ�˼��"); break;
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

const string TextManager::getTextOfColorName(ECardColor color) const {
	switch (color) {
		case ECardColor::RED: return gbkToUtf8("��ɫ"); break;
		case ECardColor::BLACK: return gbkToUtf8("��ɫ"); break;
		default: throw "Can't find match!"; break;
	}
} 
