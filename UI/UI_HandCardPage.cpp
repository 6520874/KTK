#include "UI_HandCardPage.h"

bool UI_HandCardPage::init() {
//	Todo:stm
	return true;
}

std::vector<UI_Card*> & UI_HandCardPage::getCards() const {
	//����m_cards������
	// TODO - implement UI_HandCardPage::getCards
	throw "Not yet implemented";
}

int UI_HandCardPage::getSize() const {
	// TODO - implement UI_HandCardPage::getSize
	throw "Not yet implemented";
}

bool UI_HandCardPage::isEmpty() const {
	// TODO - implement UI_HandCardPage::isEmpty
	throw "Not yet implemented";
}

bool UI_HandCardPage::isFull() const {
	// TODO - implement UI_HandCardPage::isFull
	throw "Not yet implemented";
}

void UI_HandCardPage::settleUp(bool useAction) {
	//if(ʹ�ö���)
//[
//m_cards��Ԫ�ض�����һ��moveto��������getPositionWithIndex��ȡλ�á�
//����
//}
//else
//{
//���п���������ȷ��λ�á�
//}
	// TODO - implement UI_HandCardPage::settleUp
	throw "Not yet implemented";
}

cocos2d::Vec2 UI_HandCardPage::getPositionWithIndex(int index) const {
	//����index��ȡһ�������λ�ò�����
	// TODO - implement UI_HandCardPage::getPositionWithIndex
	throw "Not yet implemented";
}

bool UI_HandCardPage::hasCard(const std::shared_ptr<Card> & card) const {
	// TODO - implement UI_HandCardPage::hasCard
	throw "Not yet implemented";
}

bool UI_HandCardPage::hasCard(const UI_Card * card) const {
	// TODO - implement UI_HandCardPage::hasCard
	throw "Not yet implemented";
}

void UI_HandCardPage::addCard(const std::shared_ptr<Card> & card) const {
	//���ԣ�!isfull��
//��װΪUI_Card *������addcard(const UI_card *)
	// TODO - implement UI_HandCardPage::addCard
	throw "Not yet implemented";
}

void UI_HandCardPage::addCard(const UI_Card * card) const {
	//���ԣ�!isfull��
//static int ������ = 0;
//pushback��m_cards
//��������Ƿ���visible
//���ǣ�
//����һ��ѹ��Ķ���(���Ӽ��������ƶ����������ټ�����������Ƿ��Ϊ0Ϊ0����addcardfinishcallback)
//����
//����settleup
	// TODO - implement UI_HandCardPage::addCard
	throw "Not yet implemented";
}

UI_Card * UI_HandCardPage::removeCard(const std::shared_ptr<Card> & card) const {
	//���ԣ�hascard�����ƣ���
//��m_cards��ɾ���������ָ�벢����UI_card*
	// TODO - implement UI_HandCardPage::removeCard
	throw "Not yet implemented";
}

UI_Card * UI_HandCardPage::removeCard(const UI_Card * card) const {
	//���ԣ�hascard�����ƣ���
//��m_cards��ɾ���������ָ�벢����UI_card*
	// TODO - implement UI_HandCardPage::removeCard
	throw "Not yet implemented";
}

std::vector<UI_Card*> UI_HandCardPage::removeAll() const {
	//��m_cards��Ԫ���ƶ�����vec������
	// TODO - implement UI_HandCardPage::removeAll
	throw "Not yet implemented";
}

void UI_HandCardPage::setAddCardFinishCallBack(const std::function<void ()> & m_addCardFinishCallBack) {
	// TODO - implement UI_HandCardPage::setAddCardFinishCallBack
	throw "Not yet implemented";
}
