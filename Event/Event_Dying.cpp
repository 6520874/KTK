#include "Event_Dying.h"

std::shared_ptr<Player> Event_Dying::getFirstPlayer() const {
	return this->m_firstPlayer;
}

void Event_Dying::setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const {
	this->m_firstPlayer = m_firstPlayer;
}

std::shared_ptr<Player> Event_Dying::getDyingPlayer() const {
	return this->m_DyingPlayer;
}

void Event_Dying::setDyingPlayer(const std::shared_ptr<Player> m_DyingPlayer) const {
	this->m_DyingPlayer = m_DyingPlayer;
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
