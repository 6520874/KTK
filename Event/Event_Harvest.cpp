#include "Event_Harvest.h"

std::shared_ptr<Player> Event_Harvest::getCurrentPlayer() const {
	return m_currentPlayer.lock();
}

void Event_Harvest::setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

void Event_Harvest::eventResolve() const {
	//static player * currentplayer = nullptr;
//static Event_GetCardFromHarvest *  event = nullptr;
//if(!event)	��һ��ִ�У�currentPlayer = playcardplayer
//��װΪEvent_GetCardFromHarvest��interactPlayerΪcurrentplayer������finishCallback��
//�ɹ�����ѡ�е��Ƹ�interactPlayer
//ʧ�ܣ�ɶҲ����
//else
//             ++currentplayer;
//             if(const currentplayer != playcardplayer) 
//                          ��event��inreactplayer����Ϊcurrentplayer������ѹ��Eventmanager
//             else
//                         �����ƺ���������̬��Ա����Ϊ��ָ�룬ע�������������¼�״̬ΪFINISH
	// TODO - implement Event_Harvest::eventResolve
	throw "Not yet implemented";
}
