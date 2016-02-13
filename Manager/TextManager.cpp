#include "TextManager.h"
#include <codecvt>

TextManager::TextManager() {
	//���ļ������ļ��������������С�
}

const std::string TextManager::gbkToUtf8(const std::string & gbkStr) {
	using Codecvt = std::codecvt_byname<wchar_t, char, std::mbstate_t>;
	const char * GBK_LOCAL_NAME = ".936";	//win��GBK�����Ӧ�Ĵ���ҳ��
	std::wstring_convert<Codecvt> conv1(new Codecvt(GBK_LOCAL_NAME));
	std::wstring temp_wstr = conv1.from_bytes(gbkStr);
	std::wstring_convert<std::codecvt_utf8<wchar_t>> conv2;
	std::string utf8Str = conv2.to_bytes(temp_wstr);
	return utf8Str;
}

const char * TextManager::gbkToUtf8(const char * gbkStr) {
	return TextManager::gbkToUtf8(std::string(gbkStr)).c_str();
}

const char* TextManager::getTextOfCharName(const ECharName name) const {
	// TODO - implement TextManager::getTextOfCharName
	switch (name)
	{
		case ECharName::CAOCAO: return TextManager::gbkToUtf8("�ܲ�"); break;
		case ECharName::DAQIAO: return TextManager::gbkToUtf8("����"); break;
		case ECharName::DIAOCHAN: return TextManager::gbkToUtf8("����"); break;
		case ECharName::GANNING: return TextManager::gbkToUtf8("����"); break;
		case ECharName::GUANYU: return TextManager::gbkToUtf8("����"); break;
		case ECharName::GUOJIA: return TextManager::gbkToUtf8("����"); break;
		case ECharName::HUANGGAI: return TextManager::gbkToUtf8("�Ƹ�"); break;
		case ECharName::HUANGYUEYING: return TextManager::gbkToUtf8("����Ӣ"); break;
		case ECharName::HUATUO: return TextManager::gbkToUtf8("��٢"); break;
		case ECharName::LIUBEI: return TextManager::gbkToUtf8("����"); break;
		case ECharName::LUXUN: return TextManager::gbkToUtf8("½ѷ"); break;
		case ECharName::LVBU: return TextManager::gbkToUtf8("����"); break;
		case ECharName::LVMENG: return TextManager::gbkToUtf8("����"); break;
		case ECharName::MACHAO: return TextManager::gbkToUtf8("��"); break;
		case ECharName::SIMAYI: return TextManager::gbkToUtf8("˾��ܲ"); break;
		case ECharName::SUNSHANGXIANG: return TextManager::gbkToUtf8("������"); break;
		case ECharName::XIAHOUDUN: return TextManager::gbkToUtf8("�ĺ"); break;
		case ECharName::SUNQUAN: return TextManager::gbkToUtf8("��Ȩ"); break;
		case ECharName::XUZHU: return TextManager::gbkToUtf8("����"); break;
		case ECharName::ZHANGFEI: return TextManager::gbkToUtf8("�ŷ�"); break;
		case ECharName::ZHANGLIAO: return TextManager::gbkToUtf8("����"); break;
		case ECharName::ZHAOYUN: return TextManager::gbkToUtf8("����"); break;
		case ECharName::ZHENJI: return TextManager::gbkToUtf8("�缧"); break;
		case ECharName::ZHOUYU: return TextManager::gbkToUtf8("���"); break;
		case ECharName::ZHUGELIANG: return TextManager::gbkToUtf8("�����"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfCardName(const ECardName name) const {
	// TODO - implement TextManager::getTextOfCardName
	switch (name)
	{	
		case ECardName::ALLOUTOFNONE: return TextManager::gbkToUtf8("��������"); break;
		case ECardName::ARROWRAIN: return TextManager::gbkToUtf8("����뷢"); break;
		case ECardName::BAGUARANK: return TextManager::gbkToUtf8("������"); break;
		case ECardName::CHITU: return TextManager::gbkToUtf8("����"); break;
		case ECardName::COUPLESWORDS: return TextManager::gbkToUtf8("����˫�ɽ�"); break;
		case ECardName::DAWAN: return TextManager::gbkToUtf8("����"); break;
		case ECardName::DILU: return TextManager::gbkToUtf8("��¬"); break;
		case ECardName::DODGE: return TextManager::gbkToUtf8("��"); break;
		case ECardName::DRAGONBROADSWORD: return TextManager::gbkToUtf8("�������µ�"); break;
		case ECardName::DROWNLNHAPPINESS: return TextManager::gbkToUtf8("�ֲ�˼��"); break;
		case ECardName::DUEL: return TextManager::gbkToUtf8("����"); break;
		case ECardName::FLAWLESSDEFENSE: return TextManager::gbkToUtf8("��и�ɻ�"); break;
		case ECardName::GUANSHIAXE: return TextManager::gbkToUtf8("��ʯ��"); break;
		case ECardName::HARVEST: return TextManager::gbkToUtf8("��ȷ��"); break;
		case ECardName::ICESWORD: return TextManager::gbkToUtf8("������"); break;
		case ECardName::JUEYING: return TextManager::gbkToUtf8("��Ӱ"); break;
		case ECardName::JUSTICESHIELD: return TextManager::gbkToUtf8("������"); break;
		case ECardName::KYLINBOW: return TextManager::gbkToUtf8("���빭"); break;
		case ECardName::LIGHTNING: return TextManager::gbkToUtf8("����"); break;
		case ECardName::MURDERWITHBORROWEDWEAPON: return TextManager::gbkToUtf8("�赶ɱ��"); break;
		case ECardName::OATHLNPEACHGARDEN: return TextManager::gbkToUtf8("��԰����"); break;
		case ECardName::PEACH: return TextManager::gbkToUtf8("��"); break;
		case ECardName::SABOTAGE: return TextManager::gbkToUtf8("���Ӳ���"); break;
		case ECardName::SLASH: return TextManager::gbkToUtf8("ɱ"); break;
		case ECardName::SNAKESPEAR: return TextManager::gbkToUtf8("�ɰ���ì"); break;
		case ECardName::SOUTHLNVASION: return TextManager::gbkToUtf8("��������"); break;
		case ECardName::THEFT: return TextManager::gbkToUtf8("˳��ǣ��"); break;
		case ECardName::TRIPLEHALBERD: return TextManager::gbkToUtf8("���컭�"); break;
		case ECardName::TSINGGANGSWORD: return TextManager::gbkToUtf8("���G��"); break;
		case ECardName::ZHUAHUANGFEIDIAN: return TextManager::gbkToUtf8("צ�Ʒɵ�"); break;
		case ECardName::ZHUGECROSSBOW: return TextManager::gbkToUtf8("�������"); break;
		case ECardName::ZIXING: return TextManager::gbkToUtf8("���H"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfSkillName(const ESkillName name) const {
	// TODO - implement TextManager::getTextOfSkillName
	switch (name)
	{
		
		case ESkillName::BIYUE: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::FANJIAN: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::FANKUI: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::GANGLIE: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::GUANXING: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::GUICAI: return TextManager::gbkToUtf8("���"); break;
		case ESkillName::GUOSE: return TextManager::gbkToUtf8("��ɫ"); break;
		case ESkillName::HUJIA: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::JIANXIONG: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::JIEYIN: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::JIJIANG: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::JIJIU: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::JIUYUAN: return TextManager::gbkToUtf8("��Ԯ"); break;
		case ESkillName::JIZHI: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::KEJI: return TextManager::gbkToUtf8("�˼�"); break;
		case ESkillName::KONGCHENG: return TextManager::gbkToUtf8("�ճ�"); break;
		case ESkillName::KUROU: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::LIANYING: return TextManager::gbkToUtf8("��Ӫ"); break;
		case ESkillName::LIJIAN: return TextManager::gbkToUtf8("���"); break;
		case ESkillName::LIULI: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::LONGDAN: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::LUOSHEN: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::LUOYI: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::MASHU: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::PAOXIAO: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::QIANXUN: return TextManager::gbkToUtf8("ǫѷ"); break;
		case ESkillName::QICAI: return TextManager::gbkToUtf8("���"); break;
		case ESkillName::QINGGUO: return TextManager::gbkToUtf8("���"); break;
		case ESkillName::QINGNANG: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::QIXI: return TextManager::gbkToUtf8("��Ϯ"); break;
		case ESkillName::RENDE: return TextManager::gbkToUtf8("�ʵ�"); break;
		case ESkillName::TIANDU: return TextManager::gbkToUtf8("���"); break;
		case ESkillName::TIEJI: return TextManager::gbkToUtf8("����"); break;
		case ESkillName::TUXI: return TextManager::gbkToUtf8("ͻϮ"); break;
		case ESkillName::WUSHENG: return TextManager::gbkToUtf8("��ʥ"); break;
		case ESkillName::WUSHUANG: return TextManager::gbkToUtf8("��˫"); break;
		case ESkillName::XIAOJI: return TextManager::gbkToUtf8("�ɼ�"); break;
		case ESkillName::YIJI: return TextManager::gbkToUtf8("�ż�"); break;
		case ESkillName::YINGZI: return TextManager::gbkToUtf8("Ӣ��"); break;
		case ESkillName::ZHIHENG: return TextManager::gbkToUtf8("�ƺ�"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfCardDescribe(const ECardName name) const {
	// TODO - implement TextManager::getTextOfCardDescribe
	throw "Not yet implemented";
}

const char* TextManager::getTextOfCharDescribe(const ECharName name) const {
	// TODO - implement TextManager::getTextOfCharDescribe
	throw "Not yet implemented";
}

const char* TextManager::getTextOfSuit(const ECardSuit suit) const {
	// TODO - implement TextManager::getTextOfSuit
	switch (suit)
	{
		case ECardSuit::HEART: return TextManager::gbkToUtf8("����"); break; 
		case ECardSuit::CLUB: return TextManager::gbkToUtf8("÷��"); break;
		case ECardSuit::DIAMOND: return TextManager::gbkToUtf8("����"); break;
		case ECardSuit::SPADE: return TextManager::gbkToUtf8("����"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfColorName(const ECardColor color) const {
	// TODO - implement TextManager::getTextOfColorName
	switch (color)
	{
		case ECardColor::RED: return TextManager::gbkToUtf8("��ɫ"); break;
		case ECardColor::BLACK: return TextManager::gbkToUtf8("��ɫ"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
} 
