#include "Event_SouthInvasion.h"

const std::shared_ptr<Player> & Event_SouthInvasion::getCurrentPlayer() const {
	return m_currentPlayer;
}

void Event_SouthInvasion::setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

void Event_SouthInvasion::eventResolve() const {
	//static player * currentplayer = nullptr;
//if(!currentplayer)             ��һ��ִ�У�currentPlayer = playcardplayer����һ�����
//��װΪEvent_RequestCard������ɱ��interactPlayerΪcurrentplayer������finishCallback��
//�ɹ���ʧȥһ��ɱ������Ѫ
//ʧ�ܣ��˺�һ��Ѫ
//else
//             ++currentplayer;
//             if(const currentplayer != playcardplayer) 
//                          ������װ����ɱ�¼�����inreactplayer����Ϊcurrentplayer
//             else
//                         �����ƺ�����̬��Ա����Ϊ��ָ�룬�����¼�״̬ΪFINISH
	// TODO - implement Event_SouthInvasion::eventResolve
	throw "Not yet implemented";
}
