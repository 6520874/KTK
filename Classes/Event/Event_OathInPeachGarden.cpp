#include "Event_OathInPeachGarden.h"

std::shared_ptr<Player> Event_OathInPeachGarden::getCurrentPlayer() const {
	return m_currentPlayer.lock();
}

void Event_OathInPeachGarden::setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

void Event_OathInPeachGarden::eventResolve() const {
	//static player * currentplayer = nullptr;
//if(!currentplayer)             ��һ��ִ�У�currentPlayer = playcardplayer
//                 if(const currentplayerδ��Ѫ)	+1Ѫ
//                 else                                                           ɶҲ����
//                 ++currentPlayer
	// TODO - implement Event_OathInPeachGarden::eventResolve
	throw "Not yet implemented";
}
