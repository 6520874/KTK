#include "Card_Slash.h"

int Card_Slash::getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const {
	//�鿴�������Ƿ�װ���˷��컭ꪣ����ǣ�����3
//���򷵻�1
	// TODO - implement Card_Slash::getGoalPlayerQuantity
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> Card_Slash::getCandidate(const std::shared_ptr<Player> playCardPlayer) const {
	//����Card::getCandidate()
//�ų��ճǷ����е��������
	// TODO - implement Card_Slash::getCandidate
	throw "Not yet implemented";
}

void Card_Slash::useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const {
	//����Card::useCard()
//��װEvent_Slash�¼������͸�eventmanager
//����usedOnceΪture
	// TODO - implement Card_Slash::useCard
	throw "Not yet implemented";
}

void Card_Slash::eventCallBack(const std::shared_ptr<Event_Base>& event) const {
	// TODO - implement Card_Slash::eventCallBack
	throw "Not yet implemented";
}
