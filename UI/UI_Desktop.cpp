#include "UI_Desktop.h"

using cocos2d::Vec2;
using std::string;

bool UI_Desktop::init() const {
	// TODO - implement UI_Desktop::init
	throw "Not yet implemented";
}

int UI_Desktop::pushBack(const UI_Card * card) {
	//ֱ��ѹ��cards�У�������cards.size()
	// TODO - implement UI_Desktop::pushBack
	throw "Not yet implemented";
}

Vec2 UI_Desktop::getPositionForCard(const int index) const {
	//��ȡcards��size������index�����꣬������
	// TODO - implement UI_Desktop::getPositionForCard
	throw "Not yet implemented";
}

void UI_Desktop::addCards(const UI_Card * card, const std::string & description) {
	//�����ÿ��Ƶ�description��Ȼ��push��cards������settleup
	// TODO - implement UI_Desktop::addCards
	throw "Not yet implemented";
}

void UI_Desktop::settleUp() {
	//Ϊÿһ��UI_card * ����һ������ȷλ�õ��ƶ�����
	// TODO - implement UI_Desktop::settleUp
	throw "Not yet implemented";
}

bool UI_Desktop::getNeedToClean() const {
	return this->m_needToClean;
}

void UI_Desktop::setNeedToClean(bool needToClean) {
	throw "Not yet implemented";
}

void UI_Desktop::clean() const {
	//����needtocleanΪfalse�������п����ƶ���cleanCards��������ȥ���������������Զ�ִ��removechild
	// TODO - implement UI_Desktop::clean
	throw "Not yet implemented";
}

void UI_Desktop::update(float delta) {
	//if         m_needtocleans = false		return;
//if     ���п�����ִ�ж�����	 return;
//clean
	// TODO - implement UI_Desktop::update
	throw "Not yet implemented";
}
