#include "GameManager.h"

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

void GameManager::gameBegin() const {
	// ���ѡ���ɫ��
	// ��ʼ�����еĹ�������
	// TODO - implement GameManager::gameBegin
	throw "Not yet implemented";
}

void GameManager::gameEnd() const {
	// TODO - implement GameManager::gameEnd
	throw "Not yet implemented";
}
