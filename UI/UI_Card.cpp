#include "cocos2d.h"
#include "UI_Card.h"
#include <memory>

using std::shared_ptr;
using cocos2d::Label;
using cocos2d::Action;
using cocos2d::EventListenerTouchOneByOne;

bool UI_Card::initWithCard(const shared_ptr<Card> card) const {
	//��ʼ��������Ա�����ҳ�ʼ��listener�����ǲ��󶨡�
	// TODO - implement UI_Card::initWithCard
	throw "Not yet implemented";
}

void UI_Card::initListenToUpDown() const {
	//listener�ĳ�ʼ��������ʱ������uppingΪ�෴��
	// TODO - implement UI_Card::initListenToUpDown
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Card> & UI_Card::getCard() const {
	// TODO - implement UI_Card::getCard
	throw "Not yet implemented";
}

//	Todo:stl
void UI_Card::setCard(const std::shared_ptr<Card> & card) {
	// TODO - implement UI_Card::setCard
	throw "Not yet implemented";
}

//	Todo:stl
void UI_Card::setDescription(const cocos2d::Label * description) {
	throw "Not yet implemented";
}

//	Todo:stl
bool UI_Card::getDark() const {
	return this->m_dark;
}

void UI_Card::setDark(bool dark) {
//	Todo:stm
	//if(true)	ʹ��䰵
//if(false)	���䰵
	throw "Not yet implemented";
}

//	Todo:stl
bool UI_Card::getCanUp() const {
	return this->m_canUp;
}

void UI_Card::setCanUp(bool canUp) {
//	Todo:stm
	//����canUp����
//true : ����addEventListenerWithSceneGraphPriority
//false:����removeEventListener
	throw "Not yet implemented";
}

//	Todo:stl
bool UI_Card::getUpping() const {
	return this->m_upping;
}

void UI_Card::setUpping(bool upping) {
//	Todo:stm
	//if(�Ѿ���up��down) return;
//����upping�����ҷ��������¼���
//if(true)	����upCallBack
//if(false)	����downCallBack
	throw "Not yet implemented";
}

//	Todo:stl
void UI_Card::setUpCallBack(const std::function<void (const UI_Card *)> & upCallBack) {
	throw "Not yet implemented";
}

//	Todo:stl
void UI_Card::setDownCallBack(const std::function<void (const UI_Card *)> & downCallBack) {
	throw "Not yet implemented";
}

cocos2d::Action * UI_Card::runAction(const cocos2d::Action * action) const {
	//��action��װΪ��Eventmanager.increase, action, eventmanager.decrease��
	// TODO - implement UI_Card::runAction
	throw "Not yet implemented";
}

//	Todo:stl
EventListenerTouchOneByOne* UI_Card::getListener() const {
	return this->m_listener;
}
