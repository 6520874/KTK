#include "Card.h"

using std::shared_ptr;
using std::vector;

//	Todo: stl
Card::Card(ECardName name, ECardSuit suit, int number) {
	//�������֣���ɫ����ɫ�����֣����������ÿ�������
	throw "Not yet implemented";
}

//	Todo: stl
ECardName Card::getName() const {
	// TODO - implement Card::getName
	throw "Not yet implemented";
}

//	Todo: stl
ECardType Card::getType() const {
	// TODO - implement Card::getType
	throw "Not yet implemented";
}

//	Todo: stl
ECardSuit Card::getSuit() const {
	// TODO - implement Card::getSuit
	throw "Not yet implemented";
}

//	Todo: stl
ECardColor Card::getColor() const {
	// TODO - implement Card::getColor
	throw "Not yet implemented";
}

//	Todo: stl
int Card::getNumber() const {
	throw "Not yet implemented";
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

//	Todo: stl
void Card::setName(ECardName name) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setType(ECardType type) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setSuit(ECardSuit suit) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setColor(ECardColor color) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setNumber(int number) {
	throw "Not yet implemented";
}
