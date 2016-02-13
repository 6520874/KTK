#ifndef Event_Slash_h__
#define Event_Slash_h__

#include "Event_Base.h"
#include <memory>
#include <vector>
#include "Manager\KTK_Enum.h"
#include "Card\Card.h"
#include "Player\Player.h"

class Event_Slash : Event_Base {

private:
	std::shared_ptr<Player> m_firstPlayer;
	std::shared_ptr<Card> m_weapon;
	std::shared_ptr<Player> m_goalPlayers;
	std::shared_ptr<Card> m_armor;
	std::vector<std::shared_ptr<Card>> m_slash;
	ESlashState m_slashState;
	bool m_needToAskPlayer;

public:
	std::shared_ptr<Player> getFirstPlayer() const;

	void setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const;

	std::shared_ptr<Card> getWeapon() const;

	void setWeapon(const std::shared_ptr<Card> m_weapon) const;

	std::shared_ptr<Player> getGoalPlayers() const;

	void setGoalPlayers(const std::shared_ptr<Player> m_goalPlayers) const;

	std::shared_ptr<Card> getArmor() const;

	void setArmor(const std::shared_ptr<Card> m_armor) const;

	std::vector<std::shared_ptr<Card>> getSlash() const;

	void setSlash(const std::vector<std::shared_ptr<Card>> m_slash) const;

	bool getNeedToAskPlayer() const;

	void setNeedToAskPlayer(const bool m_needToAskPlayer) const;

	ESlashState getSlashState() const;

	void setSlashState(const ESlashState m_slashState) const;

	void eventResolve() const;

	void weaponCheckBeforeSlash() const;

	void armorCheckBeforeSlash() const;

	void slashing() const;

	void slashSuccess() const;

	void slashFail() const;

	void hurting() const;

	void slashFinish() const;
};
#endif // Event_Slash_h__
