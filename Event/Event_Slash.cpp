#include "Event_Slash.h"

std::shared_ptr<Player> Event_Slash::getFirstPlayer() const {
	return this->m_firstPlayer;
}

void Event_Slash::setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const {
	throw "Not yet implemented";
}

std::shared_ptr<Card> Event_Slash::getWeapon() const {
	return this->m_weapon;
}

void Event_Slash::setWeapon(const std::shared_ptr<Card> m_weapon) const {
	throw "Not yet implemented";
}

std::shared_ptr<Player> Event_Slash::getGoalPlayers() const {
	return this->m_goalPlayers;
}

void Event_Slash::setGoalPlayers(const std::shared_ptr<Player> m_goalPlayers) const {
	throw "Not yet implemented";
}

std::shared_ptr<Card> Event_Slash::getArmor() const {
	return this->m_armor;
}

void Event_Slash::setArmor(const std::shared_ptr<Card> m_armor) const {
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Card>> Event_Slash::getSlash() const {
	return this->m_slash;
}

void Event_Slash::setSlash(const std::vector<std::shared_ptr<Card>> m_slash) const {
	throw "Not yet implemented";
}

bool Event_Slash::getNeedToAskPlayer() const {
	return this->m_needToAskPlayer;
}

void Event_Slash::setNeedToAskPlayer(const bool m_needToAskPlayer) const {
	throw "Not yet implemented";
}

ESlashState Event_Slash::getSlashState() const {
	return this->m_slashState;
}

void Event_Slash::setSlashState(const ESlashState m_slashState) const {
	//����needtoaskplayer
	throw "Not yet implemented";
}

void Event_Slash::eventResolve() const {
	//���needtoaskplayer�����ú�ת�����ݴ˲���ֵ��������������������
//����player��preeventresovel
//����״̬��ȷ����Ҫ���õĺ���
	// TODO - implement Event_Slash::eventResolve
	throw "Not yet implemented";
}

void Event_Slash::weaponCheckBeforeSlash() const {
	//if(���G��)			����װ��eventResolve
//else if(����˫�ɽ��������������)	����װ��eventResolve
//else	����Slash_stateΪarmorcheckbeforeSlashing
	// TODO - implement Event_Slash::weaponCheckBeforeSlash
	throw "Not yet implemented";
}

void Event_Slash::armorCheckBeforeSlash() const {
	//�����������&&��Ч���򷢵���װ��eventResolve
//����޷���        ����slashstateΪslashing
	// TODO - implement Event_Slash::armorCheckBeforeSlash
	throw "Not yet implemented";
}

void Event_Slash::slashing() const {
	//���������������¼�������ɹ�����slashFail������ʧ�ܵ���slashsuccess
	// TODO - implement Event_Slash::slashing
	throw "Not yet implemented";
}

void Event_Slash::slashSuccess() const {
	//������������� ����װ��eventResolve
//��������빭��Ŀ������ ����װ��eventResolve
//����	����slashstateΪhurting
	// TODO - implement Event_Slash::slashSuccess
	throw "Not yet implemented";
}

void Event_Slash::slashFail() const {
	//������������µ�������װ��eventResolve
//�������ʯ���� ����װ��eventResolve
//����	����slash_stateΪslashFinish
	// TODO - implement Event_Slash::slashFail
	throw "Not yet implemented";
}

void Event_Slash::hurting() const {
	//�������˺��¼���������slash_stateΪslashFinish
	// TODO - implement Event_Slash::hurting
	throw "Not yet implemented";
}

void Event_Slash::slashFinish() const {
	//���ñ�ɱ�߷���Ϊ��Ч������eventstateΪfinish
	// TODO - implement Event_Slash::slashFinish
	throw "Not yet implemented";
}
