#include "Event_FlawlessDefense.h"

std::shared_ptr<Player> Event_FlawlessDefense::getFirstPlayer() const {
	return this->m_firstPlayer;
}

void Event_FlawlessDefense::setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const {
	this->m_firstPlayer = m_firstPlayer;
}

bool Event_FlawlessDefense::getSuccess() const {
	return this->m_success;
}

void Event_FlawlessDefense::setSuccess(const bool m_success) const {
	this->m_success = m_success;
}

void Event_FlawlessDefense::eventResolve() const {
	//static Player * currentplayer = nullptr;
//if(const currentplayer == nullptr)                                 currentPlayer = firstplayer;
// ��װ������и�ɻ����¼���currentPlayer������finishcallback��
//�ɹ�������success = !success����ʼֵΪfalse��������״̬ΪFINISH
//             ���ٴη���event_FlawlessDefense�¼�������finishcallback��
//                         if(���¼�success) success = !success; else ʲôҲ����
//ʧ�ܣ�ʲôҲ����
//else 
//                    ++currentplayer;
//                    if(const currentplayer != firstplayer)    ������װevent_FlawlessDefense�¼���
//                    else              ����״̬ΪFINISH

	// TODO - implement Event_FlawlessDefense::eventResolve
	throw "Not yet implemented";
}
