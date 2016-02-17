#ifndef TextManager_h__
#define TextManager_h__

#include <string>
#include <unordered_map>
#include "KTK_Enum.h"

class TextManager {
	typedef std::unordered_map<std::string, std::string, std::hash<std::string>> DescriptionMap;
public:
	TextManager();

	//��ΪԴ����Ϊgbk��ʽ����Ҫת��ΪUTF-8������cocos2dx������ʾ�ַ�����
	static const std::string gbkToUtf8(const std::string & gbkStr);
	static const std::string gbkToUtf8(const char * gbkStr);

	const std::string getTextOfCharName(ECharName name) const;
	const std::string getTextOfCardName(ECardName name) const;
	const std::string getTextOfSkillName(ESkillName name) const;
	const std::string getTextOfCardDescription(ECardName name) const;
	const std::string getTextOfSkillDescription(ESkillName name) const;
	const std::string getTextOfSuit(ECardSuit suit) const;
	const std::string getTextOfColorName(ECardColor color) const;

private:
	DescriptionMap cardDescription;
	DescriptionMap skillDescription;
};

#endif // TextManager_h__
