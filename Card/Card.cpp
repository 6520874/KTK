#include "Card.h"

using std::shared_ptr;
using std::vector;

//	Todo: stl
Card::Card(ECardName name, ECardSuit Suit, int number) {
	throw "Not yet implemented";
}

ECardName Card::getName() const {
	return m_name;
}

ECardType Card::getType() const {
	return m_type;
}

ECardSuit Card::getSuit() const {
	return m_suit;
}

ECardColor Card::getColor() const {
	return m_color;
}

int Card::getNumber() const {
	return m_number;
}

int Card::getGoalPlayerQuantity(const shared_ptr<Player> & requester) const {
//	Todo: stm
	throw "Not yet implemented";
}

vector<shared_ptr<Player>> Card::getCandidates(const shared_ptr<Player> playCardPlayer) const {
//	Todo: stm
	// TODO - implement Card::getCandidate
	throw "Not yet implemented";
	//�ж����أ�
//1.�������أ�X������getdistanceforCard()
//2.�Ƿ�����
//3.�Է������⼼�ܣ������-�ճǣ�½ѷ-ǫѷ����X��
//4.�Է��Ƿ��п��ƣ��赶ɱ�ˣ�˳��ǣ�򣬹��Ӳ��ţ���X��
}

void Card::onUpping() const {
	// TODO - implement Card::onUpping
	throw "Not yet implemented";
	//forwardPlayerר�ú���
//����getgoalPlayerquantity�����Ϊ0����ֱ��ʹȷ����ť��Ч��
//�����ȡ��ѡĿ�꣬��װrequesetgoal�¼�������finishcallback�ǣ�
//����¼��ɹ�usecard
//����ɶҲ����
}

void Card::useCard(const shared_ptr<Player> playCardPlayer, const vector<shared_ptr<Player>>& goalPlayer) const {
	// TODO - implement Card::useCard
	throw "Not yet implemented";
	//forwardPlayerר�ú���
//����getgoalPlayerquantity�����Ϊ0����ֱ��ʹȷ����ť��Ч��
//�����ȡ��ѡĿ�꣬��װrequesetgoal�¼�������finishcallback�ǣ�
//����¼��ɹ�usecard
//����ɶҲ����
}
