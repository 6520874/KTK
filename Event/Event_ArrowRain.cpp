#include "Event_ArrowRain.h"

const std::shared_ptr<Player> & Event_ArrowRain::getCurrentPlayer() const {
	return m_currentPlayer;
}

void Event_ArrowRain::setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

void Event_ArrowRain::eventResolve() const {
	//����finishCallback
	//static player * currentplayer = nullptr;
//if(!currentplayer)             ��һ��ִ�У�currentPlayer = playcardplayer����һ�����
//��װΪEvent_RequestCard����������interactPlayerΪcurrentplayer������finishCallback��
//�ɹ���ʧȥһ����������Ѫ
//ʧ�ܣ��˺�һ��Ѫ
//else
//             ++currentplayer;
//             if(const currentplayer != playcardplayer) 
//                          ������װ�������¼�����inreactplayer����Ϊcurrentplayer
//             else
//                         �����ƺ�����̬��Ա����Ϊ��ָ�룬�����¼�״̬ΪFINISH
	// TODO - implement Event_ArrowRain::eventResolve
	throw "Not yet implemented";
}
