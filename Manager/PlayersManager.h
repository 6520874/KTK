#ifndef PlayersManager_h__
#define PlayersManager_h__

#include <vector>
#include <functional>
#include "Player\Player.h"

class PlayersManager {
public:
	PlayersManager();

	const std::shared_ptr<Player> & getLordPlayer() const;
	void setLordPlayer(const std::shared_ptr<Player> & lordPlayer);
	const std::shared_ptr<Player> & getCurrentPlayer() const;
	void setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer);
	const std::shared_ptr<Player> & getForwardPlayer() const;
	void setForwardPlayer(const std::shared_ptr<Player> & forwardPlayer);

	// ��ȡplayer����
	std::vector<std::shared_ptr<Player>> & getPlayers();
	// ��ȡ�����������players
	std::vector<std::shared_ptr<Player>> getPlayersWithFilter(const std::function<bool(const std::shared_ptr<Player> &)> & filter) const;
	// ��ȡ��һ��player
	std::shared_ptr<Player> getNextPlayer(const std::shared_ptr<Player> & currentPlayer) const;
	// ��ȡ�������������һ��player
	std::shared_ptr<Player> getNextPlayerWithFilter(const std::shared_ptr<Player> & currentPlayer, const std::function<bool(const std::shared_ptr<Player> &)> & filter) const;
	// ��ȡ�����������player����
	int getPlayerCount(const std::function<bool(const std::shared_ptr<Player> &)> & filter) const;

private:
	// ����player
	std::shared_ptr<Player> m_lordPlayer;
	// ��ǰplayer
	std::shared_ptr<Player> m_currentPlayer;
	// ǰ��player
	std::shared_ptr<Player> m_forwardPlayer;
	// player����
	std::vector<std::shared_ptr<Player>> m_players;
};

#endif // PlayersManager_h__
