#include "SelectedCards.h"

std::deque<UI_Card *> & SelectedCards::getCards() const {
	// TODO - implement SelectedCards::getCards
	throw "Not yet implemented";
}

void SelectedCards::addCard(const UI_Card * card) {
	//�����������Ϊmaxsize������popfront�����ÿ���setupping(const true)
//������ѡ�������ﵽmaxsizeʱ������maxCallBack���������unmaxcallback
	// TODO - implement SelectedCards::addCard
	throw "Not yet implemented";
}

void SelectedCards::removeCard(const UI_Card * card) {
	//�Ƴ����Ԫ�أ����С��max������unmaxcallback
	// TODO - implement SelectedCards::removeCard
	throw "Not yet implemented";
}

void SelectedCards::popFront() {
	//����removecard���Ƴ���һԪ��
	// TODO - implement SelectedCards::popFront
	throw "Not yet implemented";
}

void SelectedCards::popAll()
{
	//���п��Ƶ���setupping(const false)
	// TODO - implement SelectedCards::popAll
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(const std::shared_ptr<Card> & card) const {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(const UI_Card * card) const {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

int SelectedCards::getMaxSelects() const {
	return m_maxSelects;
}

void SelectedCards::setMaxSelects(int maxSelects) {
	m_maxSelects = maxSelects;
}

const std::function<void()> & SelectedCards::getMaxCallBack() const {
	return m_maxCallBack;
}

void SelectedCards::setMaxCallBack(const std::function<void ()> & maxCallBack) {
	m_maxCallBack = maxCallBack;
}

const std::function<void()> & SelectedCards::getUnmaxCallBack() const {
	return m_unmaxCallBack;
}

void SelectedCards::setUnmaxCallBack(const std::function<void ()> & unmaxCallBack) {
	m_unmaxCallBack = unmaxCallBack;
}
