#include "Card.h"

Card_Color Card::getColor() {
	// TODO - implement Card::getColor
	throw "Not yet implemented";
}

Card_Name Card::getName() {
	// TODO - implement Card::getName
	throw "Not yet implemented";
}

Card_Suit Card::getSuit() {
	// TODO - implement Card::getSuit
	throw "Not yet implemented";
}

Card_Type Card::getType() {
	// TODO - implement Card::getType
	throw "Not yet implemented";
}

int Card::getGoalPlayerQuantity(std::shared_ptr<Player> requester)
{
	throw "123123";
}

std::vector<std::shared_ptr<Player>> Card::getCandidate(std::shared_ptr<Player> playCardPlayer) {
	// TODO - implement Card::getCandidate
	throw "Not yet implemented";
	//�ж����أ�
//1.�������أ�X������getdistanceforCard()
//2.�Ƿ�����
//3.�Է������⼼�ܣ������-�ճǣ�½ѷ-ǫѷ����X��
//4.�Է��Ƿ��п��ƣ��赶ɱ�ˣ�˳��ǣ�򣬹��Ӳ��ţ���X��
}


void Card::onUpping() {
	// TODO - implement Card::onUpping
	throw "Not yet implemented";
	//forwardPlayerר�ú���
//����getgoalPlayerquantity�����Ϊ0����ֱ��ʹȷ����ť��Ч��
//�����ȡ��ѡĿ�꣬��װrequesetgoal�¼�������finishcallback�ǣ�
//����¼��ɹ�usecard
//����ɶҲ����
}

void Card::useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer) {
	// TODO - implement Card::useCard
	throw "Not yet implemented";
	//forwardPlayerר�ú���
//����getgoalPlayerquantity�����Ϊ0����ֱ��ʹȷ����ť��Ч��
//�����ȡ��ѡĿ�꣬��װrequesetgoal�¼�������finishcallback�ǣ�
//����¼��ɹ�usecard
//����ɶҲ����
}
