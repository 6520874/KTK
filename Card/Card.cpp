#include "Card.h"

using std::shared_ptr;
using std::vector;

Card::Card(ECardName name, ECardSuit suit, int number) {
	m_name = name;
	m_suit = suit;
	m_number = number;
	switch (suit) {
		case ECardSuit::CLUB:
			m_color = ECardColor::BLACK;
			break;
		case ECardSuit::DIAMOND:
			m_color = ECardColor::RED;
			break;
		case ECardSuit::HEART:
			m_color = ECardColor::RED;
			break;
		case ECardSuit::SPADE:
			m_color = ECardColor::BLACK;
			break;
		default:
			throw "Can't find this kind of suit";
			break;
	}
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
	return 0;
}

std::vector<std::shared_ptr<Player>> Card::getCandidates(const std::shared_ptr<Player> & playCardPlayer) const {
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

void Card::useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const {
	// TODO - implement Card::useCard
	throw "Not yet implemented";
	//forwardPlayerר�ú���
	//����getgoalPlayerquantity�����Ϊ0����ֱ��ʹȷ����ť��Ч��
	//�����ȡ��ѡĿ�꣬��װrequesetgoal�¼�������finishcallback�ǣ�
	//����¼��ɹ�usecard
	//����ɶҲ����
}

void Card::setType(ECardType type) {
	m_type = type;
}
