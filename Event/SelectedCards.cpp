#include "SelectedCards.h"

std::deque<UI_Card*>& SelectedCards::getCards() const {
	// TODO - implement SelectedCards::getCards
	throw "Not yet implemented";
}

void SelectedCards::addCard(const UI_Card* card) const {
	//�����������Ϊmaxsize������popfront�����ÿ���setupping(const true)
//������ѡ�������ﵽmaxsizeʱ������maxCallBack���������unmaxcallback
	// TODO - implement SelectedCards::addCard
	throw "Not yet implemented";
}

void SelectedCards::removeCard(const UI_Card* card) const {
	//�Ƴ����Ԫ�أ����С��max������unmaxcallback
	// TODO - implement SelectedCards::removeCard
	throw "Not yet implemented";
}

void SelectedCards::popFront() const {
	//����removecard���Ƴ���һԪ��
	// TODO - implement SelectedCards::popFront
	throw "Not yet implemented";
}

void SelectedCards::popAll() const {
	//���п��Ƶ���setupping(const false)
	// TODO - implement SelectedCards::popAll
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(const std::shared_ptr<Card> card) const {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(const UI_Card* card) const {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

int SelectedCards::getMaxSelects() const {
	return this->m_maxSelects;
}

void SelectedCards::setMaxSelects(const int m_maxSelects) const {
	throw "Not yet implemented";
}

void SelectedCards::setMaxCallBack(const std::function<void ()> m_maxCallBack) const {
	throw "Not yet implemented";
}

void SelectedCards::setUnmaxCallBack(const std::function<void ()> m_unmaxCallBack) const {
	throw "Not yet implemented";
}
