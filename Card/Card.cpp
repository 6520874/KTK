#include "Card.h"

ECardColor Card::getColor() const {
	// TODO - implement Card::getColor
	throw "Not yet implemented";
}

ECardName Card::getName() const {
	// TODO - implement Card::getName
	throw "Not yet implemented";
}

ECardSuit Card::getSuit() const {
	// TODO - implement Card::getSuit
	throw "Not yet implemented";
}

ECardType Card::getType() const {
	// TODO - implement Card::getType
	throw "Not yet implemented";
}

int Card::getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const {
	throw "123123";
}

std::vector<std::shared_ptr<Player>> Card::getCandidate(const std::shared_ptr<Player> playCardPlayer) const {
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

void Card::useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const {
	// TODO - implement Card::useCard
	throw "Not yet implemented";
	//forwardPlayerר�ú���
//����getgoalPlayerquantity�����Ϊ0����ֱ��ʹȷ����ť��Ч��
//�����ȡ��ѡĿ�꣬��װrequesetgoal�¼�������finishcallback�ǣ�
//����¼��ɹ�usecard
//����ɶҲ����
}
