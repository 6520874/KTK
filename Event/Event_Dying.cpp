#include "Event_Dying.h"

const std::shared_ptr<Player> & Event_Dying::getFirstPlayer() const {
	return m_firstPlayer;
}

void Event_Dying::setFirstPlayer(const std::shared_ptr<Player> & firstPlayer) {
	m_firstPlayer = firstPlayer;
}

const std::shared_ptr<Player> & Event_Dying::getDyingPlayer() const {
	return m_dyingPlayer;
}

void Event_Dying::setDyingPlayer(const std::shared_ptr<Player> & dyingPlayer) {
	m_dyingPlayer = dyingPlayer;
}

const std::shared_ptr<Player> & Event_Dying::getPeachPlayer() const {
	return m_peachPlayer;
}

void Event_Dying::setPeachPlayer(const std::shared_ptr<Player> & peachPlayer) {
	m_peachPlayer = peachPlayer;
}

void Event_Dying::eventResolve() const {
	//static Player * currentplayer = nullptr;
	//if(const Dyingplayer not Dying) ����״̬ΪFINISH��return
	//if(const currentplayer == nullptr)                                 currentPlayer = firstplayer;
	// ��װ�����ҡ��¼���currentPlayer������finishcallback��
	//�ɹ���ʧȥһ���ң���¼peachPlayerΪcurrentPlayer��dyingplayer+1Ѫ��
	//ʧ�ܣ�ʲôҲ����
	//else 
	//                    ++currentplayer;
	//                    if(const currentplayer != firstplayer)    ������װ�����ҡ��¼���
	//                    else             ������������״̬ΪFINISH

	// TODO - implement Event_Dying::eventResolve
	throw "Not yet implemented";
}
