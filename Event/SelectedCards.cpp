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

//	Todo:stl
int SelectedCards::getMaxSelects() const {
	return this->m_maxSelects;
}

//	Todo:stl
void SelectedCards::setMaxSelects(int maxSelects) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::function<void()> & SelectedCards::getMaxCallBack() const {
	throw "Not yet implemented";
}

//	Todo:stl
void SelectedCards::setMaxCallBack(const std::function<void ()> & maxCallBack) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::function<void()> & SelectedCards::getUnmaxCallBack() const {
	throw "Not yet implemented";
}

//	Todo:stl
void SelectedCards::setUnmaxCallBack(const std::function<void ()> & unmaxCallBack) {
	throw "Not yet implemented";
}
