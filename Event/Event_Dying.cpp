#include "Event_Dying.h"

//	Todo:stl
const std::shared_ptr<Player> & Event_Dying::getFirstPlayer() const {
	return this->m_firstPlayer;
}

//	Todo:stl
void Event_Dying::setFirstPlayer(const std::shared_ptr<Player> & firstPlayer) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Player> & Event_Dying::getDyingPlayer() const {
	return this->m_dyingPlayer;
}

//	Todo:stl
void Event_Dying::setDyingPlayer(const std::shared_ptr<Player> & dyingPlayer) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Player> & Event_Dying::getPeachPlayer() const {
	return m_peachPlayer;
}

//	Todo:stl
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
