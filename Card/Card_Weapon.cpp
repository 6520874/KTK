#include "Card_Weapon.h"

using std::shared_ptr;
using std::vector;

int Card_Weapon::getGoalPlayerQuantity(const shared_ptr<Player> & requester) const {
	return 0;
}

void Card_Weapon::useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const {
	//���û���useCard
	//�����Ӧװ������װ������ж��װ����Ȼ��װ����ǰ��Ƭ�����û�У���ֱ��װ����
	// TODO - implement Card_Weapon::useCard
	throw "Not yet implemented";
}
