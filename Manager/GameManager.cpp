#include "GameManager.h"
#include "Card\Card_AllOutOfNone.h"
#include <utility>

GameManager * GameManager::getInstance() {
	static GameManager * instance = nullptr;
	if (instance == nullptr)
		instance = new GameManager;
	return instance;
}

GameManager::GameManager() {
	// ����playermanager
	throw "Not yet implemented";
}

PlayersManager & GameManager::getPlayerManager() {
	return m_playerManager;
}

RoundManager & GameManager::getRoundManager() {
	return m_roundManager;
}

EventManagers & GameManager::getEventManager() {
	return m_eventManager;
}

CardPile & GameManager::getDarkcardPile() {
	return m_darkcardPile;
}

CardPile & GameManager::getDiscardPile() {
	return m_discardPile;
}

void GameManager::gameBegin() {
//	Todo:stm
	m_darkcardPile.clear();
	m_discardPile.clear();
	// ���ѡ���ɫ��
	// ��ʼ�����еĹ�������

//	Todo:stl!!!!!!	�������еĿ���
	m_darkcardPile.pushBack(std::make_shared<Card_AllOutOfNone>(ECardSuit::CLUB, 1));
	// TODO - implement GameManager::gameBegin
	throw "Not yet implemented";
}

void GameManager::gameEnd() const {
	// TODO - implement GameManager::gameEnd
	throw "Not yet implemented";
}
