#include "Event_Theft.h"

std::shared_ptr<Player> Event_Theft::getGoalPlayer() const {
	return m_goalPlayer.lock();
}

void Event_Theft::setGoalPlayer(const std::shared_ptr<Player> & goalPlayer) {
	m_goalPlayer = goalPlayer;
}

void Event_Theft::eventResolve() const {
	//��װ�¼�Event_takePlayerCard������finishCallBack��
//�ɹ�����ȡCard *����Ŀ��player��ɾ�����ƣ�playCardplayer��ô���
//ʧ�ܣ����س��ƽ׶�
	// TODO - implement Event_Theft::eventResolve
	throw "Not yet implemented";
}
