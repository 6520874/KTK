#include "UI_TheftAndSabotage.h"

bool UI_TheftAndSabotage::initWithPlayer(const std::shared_ptr<Player> player, const ECardName cardName) const {
	//���ݿ������ֻ�ȡ���⡣
//����Player��ȡ�����п������ϣ��ٲ���8��UI_Card *��ĳЩΪ��ָ�롣
//Ϊÿ��UI_Card *���ô����¼���ע��ֻ����һ��UI_card *����ѡ��״̬��
	// TODO - implement UI_TheftAndSabotage::initWithPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Card> UI_TheftAndSabotage::getSelectedCard() const {
	return this->m_selectedCard;
}

void UI_TheftAndSabotage::setSelectedCard(const std::shared_ptr<Card> m_selectedCard) const {
	throw "Not yet implemented";
}
