#include "Event_FlawlessDefense.h"

std::shared_ptr<Player> Event_FlawlessDefense::getFirstPlayer() {
	return this->m_firstPlayer;
}

void Event_FlawlessDefense::setFirstPlayer(std::shared_ptr<Player> m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

bool Event_FlawlessDefense::getSuccess() {
	return this->m_success;
}

void Event_FlawlessDefense::setSuccess(bool m_success) {
	this->m_success = m_success;
}

void Event_FlawlessDefense::eventResolve() {
	//static Player * currentplayer = nullptr;
//if(currentplayer == nullptr)                                 currentPlayer = firstplayer;
// ��װ������и�ɻ����¼���currentPlayer������finishcallback��
//�ɹ�������success = !success����ʼֵΪfalse��������״̬ΪFINISH
//             ���ٴη���event_FlawlessDefense�¼�������finishcallback��
//                         if(���¼�success) success = !success; else ʲôҲ����
//ʧ�ܣ�ʲôҲ����
//else 
//                    ++currentplayer;
//                    if(currentplayer != firstplayer)    ������װevent_FlawlessDefense�¼���
//                    else              ����״̬ΪFINISH

	// TODO - implement Event_FlawlessDefense::eventResolve
	throw "Not yet implemented";
}
