#include "UI_TheftAndSabotage.h"

bool UI_TheftAndSabotage::initWithPlayer(const std::shared_ptr<Player> & player, ECardName cardName) {
	//���ݿ������ֻ�ȡ���⡣
	//����Player��ȡ�����п������ϣ��ٲ���8��std::shared_ptr<UI_Card>��ĳЩΪ��ָ�롣
	//Ϊÿ��std::shared_ptr<UI_Card>���ô����¼���ע��ֻ����һ��std::shared_ptr<UI_Card>����ѡ��״̬��
	// TODO - implement UI_TheftAndSabotage::initWithPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Card> UI_TheftAndSabotage::getSelectedCard() const {
	return m_selectedCard.lock();
}

void UI_TheftAndSabotage::setSelectedCard(const std::shared_ptr<Card> & selectedCard) {
	m_selectedCard = selectedCard;
}
