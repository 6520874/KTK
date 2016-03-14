#include "Event_Duel.h"

std::shared_ptr<Player> Event_Duel::getGoalPlayer() const {
	return m_goalPlayer.lock();
}

void Event_Duel::setGoalPlayer(const std::shared_ptr<Player> & goalPlayer) {
	m_goalPlayer = goalPlayer;
}

std::shared_ptr<Player> Event_Duel::getCurrentPlayer() const {
	return m_currentPlayer.lock();
}

void Event_Duel::setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

void Event_Duel::eventResolve() const {
	//��player2��������ɱ��blablablabla....
//��player1��������ɱ��blablablabla....
	// TODO - implement Event_Duel::eventResolve
	throw "Not yet implemented";
}
