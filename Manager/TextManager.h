#ifndef TextManager_h__
#define TextManager_h__

#include <string>
#include <unordered_map>
#include "KTK_Enum.h"

class TextManager {
public:
	TextManager();

	//��ΪԴ����Ϊgbk��ʽ����Ҫת��ΪUTF-8������cocos2dx������ʾ�ַ�����
	static const std::string gbkToUtf8(const std::string & gbkStr);
	static const char * gbkToUtf8(const char * gbkStr);

	const char* getTextOfCharName(const ECharName name) const;
	const char* getTextOfCardName(const ECardName name) const;
	const char* getTextOfSkillName(const ESkillName name) const;
	const char* getTextOfCardDescribe(const ECardName name) const;
	const char* getTextOfCharDescribe(const ECharName name) const;
	const char* getTextOfSuit(const ECardSuit suit) const;
	const char* getTextOfColorName(const ECardColor color) const;

private:
	std::unordered_map<std::string, std::string, std::hash<std::string>> cardDescribe;
	std::unordered_map<std::string, std::string, std::hash<std::string>> skillDescribe;
};

#endif // TextManager_h__
