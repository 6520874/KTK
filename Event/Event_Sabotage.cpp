#include "Event_Sabotage.h"

const std::shared_ptr<Player> & Event_Sabotage::getGoalPlayer() const {
	return m_goalPlayer;
}

void Event_Sabotage::setGoalPlayer(const std::shared_ptr<Player> & goalPlayer) {
	m_goalPlayer = goalPlayer;
}

void Event_Sabotage::eventResolve() const {
	//��װ�¼�Event_takePlayerCard������finishCallBack��
//�ɹ�����ȡCard *����Ŀ��player��ɾ������
//ʧ�ܣ����س��ƽ׶�
	// TODO - implement Event_Sabotage::eventResolve
	throw "Not yet implemented";
}
