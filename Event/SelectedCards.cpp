#include "SelectedCards.h"

std::deque<UI_Card*>& SelectedCards::getCards() {
	// TODO - implement SelectedCards::getCards
	throw "Not yet implemented";
}

void SelectedCards::addCard(UI_Card* card) {
	//�����������Ϊmaxsize������popfront�����ÿ���setupping(true)
//������ѡ�������ﵽmaxsizeʱ������maxCallBack���������unmaxcallback
	// TODO - implement SelectedCards::addCard
	throw "Not yet implemented";
}

void SelectedCards::removeCard(UI_Card* card) {
	//�Ƴ����Ԫ�أ����С��max������unmaxcallback
	// TODO - implement SelectedCards::removeCard
	throw "Not yet implemented";
}

void SelectedCards::popFront() {
	//����removecard���Ƴ���һԪ��
	// TODO - implement SelectedCards::popFront
	throw "Not yet implemented";
}

void SelectedCards::popAll() {
	//���п��Ƶ���setupping(false)
	// TODO - implement SelectedCards::popAll
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(std::shared_ptr<Card> card) {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(UI_Card* card) {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

int SelectedCards::getMaxSelects() {
	return this->m_maxSelects;
}

void SelectedCards::setMaxSelects(int m_maxSelects) {
	this->m_maxSelects = m_maxSelects;
}

void SelectedCards::setMaxCallBack(std::function<void ()> m_maxCallBack) {
	this->m_maxCallBack = m_maxCallBack;
}

void SelectedCards::setUnmaxCallBack(std::function<void ()> m_unmaxCallBack) {
	this->m_unmaxCallBack = m_unmaxCallBack;
}
