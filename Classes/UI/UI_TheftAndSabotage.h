#ifndef UI_TheftAndSabotage_h__
#define UI_TheftAndSabotage_h__

#include <memory>
#include <vector>
#include "Player/Player.h"
#include "Card/Card.h"
#include "Manager/KTK_Enum.h"
#include "UI_Card.h"

class UI_TheftAndSabotage : public cocos2d::Node {
public:
	static UI_TheftAndSabotage * create(const std::shared_ptr<Player> & player, ECardName cardName) {
		UI_TheftAndSabotage * pRet = new(std::nothrow) UI_TheftAndSabotage();
		if (pRet && pRet->initWithPlayer(player, cardName)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithPlayer(const std::shared_ptr<Player> & player, ECardName cardName);
	std::shared_ptr<Card> getSelectedCard() const;
	void setSelectedCard(const std::shared_ptr<Card> & selectedCard);
protected:
	UI_TheftAndSabotage() = default;
private:
	std::weak_ptr<Player> m_player;
	std::weak_ptr<Card> m_selectedCard;
	std::vector<std::shared_ptr<UI_Card>> m_cards;
};
#endif // UI_TheftAndSabotage_h__
