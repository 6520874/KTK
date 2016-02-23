#include "Event_FlawlessDefense.h"

const std::shared_ptr<Player> & Event_FlawlessDefense::getFirstPlayer() const {
	return m_firstPlayer;
}

void Event_FlawlessDefense::setFirstPlayer(const std::shared_ptr<Player> & firstPlayer) {
	m_firstPlayer = firstPlayer;
}

bool Event_FlawlessDefense::getSuccess() const {
	return m_success;
}

void Event_FlawlessDefense::setSuccess(bool success) {
	m_success = success;
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
