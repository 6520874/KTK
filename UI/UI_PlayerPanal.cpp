#include "UI_PlayerPanal.h"

void UI_PlayerPanal::initWithPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement UI_PlayerPanal::initWithPlayer
	throw "Not yet implemented";
	//�������������addchild�Ժ���ø��������refresh
}

std::shared_ptr<Player> UI_PlayerPanal::getPlayer() const {
	// TODO - implement UI_PlayerPanal::getPlayer
	throw "Not yet implemented";
}

void UI_PlayerPanal::setPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement UI_PlayerPanal::setPlayer
	throw "Not yet implemented";
	//����initwithplayer
}

UI_ID* UI_PlayerPanal::getID() const {
	// TODO - implement UI_PlayerPanal::getID
	throw "Not yet implemented";
	//���е�get��ǰ��Ҫ����Ƿ�Ϊ��ָ�룬��Ϊ�գ���������Ҫ�ȵ���initwithplayer
}

UI_HP* UI_PlayerPanal::getHP() const {
	// TODO - implement UI_PlayerPanal::getHP
	throw "Not yet implemented";
}

UI_Position* UI_PlayerPanal::getPosition() const {
	// TODO - implement UI_PlayerPanal::getPosition
	throw "Not yet implemented";
}

UI_HandCardQuantity* UI_PlayerPanal::getHandCardQuantity() const {
	// TODO - implement UI_PlayerPanal::getHandCardQuantity
	throw "Not yet implemented";
}

UI_EquipmentPanal* UI_PlayerPanal::getEquipmentPanal() const {
	// TODO - implement UI_PlayerPanal::getEquipmentPanal
	throw "Not yet implemented";
}

UI_JudgeIcon* UI_PlayerPanal::getJudgeIcon() const {
	// TODO - implement UI_PlayerPanal::getJudgeIcon
	throw "Not yet implemented";
}

UI_InformationBox* UI_PlayerPanal::getInformationBox() const {
	// TODO - implement UI_PlayerPanal::getInformationBox
	throw "Not yet implemented";
}

UI_LogBox* UI_PlayerPanal::getLogBox() const {
	// TODO - implement UI_PlayerPanal::getLogBox
	throw "Not yet implemented";
}

void UI_PlayerPanal::drawCards(const std::vector<std::shared_ptr<Card>>& cards) const {
	//ֱ�ӻ�ȡcards.size()��
//��Ϊ�⼸�����Ʒ�װΪ����Ŀ��Ʋ�����һ���ƶ�����ȥ��removechild�Ķ���
	// TODO - implement UI_PlayerPanal::drawCards
	throw "Not yet implemented";
}

EPlayerColor UI_PlayerPanal::getPlayerColor() const {
	return this->m_playerColor;
}

void UI_PlayerPanal::setPlayerColor(const EPlayerColor m_playerColor) const {
	//���������ɫ
	throw "Not yet implemented";
}

EPlayerPanalState UI_PlayerPanal::getPlayerPanalState() const {
	return this->m_playerPanalState;
}

void UI_PlayerPanal::setPlayerPanalState(const EPlayerPanalState m_playerPanalState) const {
	//���ñ���,���Ϊ��ѡ��ģ������¼�������������selectedPlayer��
	throw "Not yet implemented";
}

void UI_PlayerPanal::clean() const {
	// TODO - implement UI_PlayerPanal::clean
	throw "Not yet implemented";
}
