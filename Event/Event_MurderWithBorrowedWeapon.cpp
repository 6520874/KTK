#include "Event_MurderWithBorrowedWeapon.h"

const std::shared_ptr<Player> & Event_MurderWithBorrowedWeapon::getGoalPlayer1() const {
	return m_goalPlayer1;
}

void Event_MurderWithBorrowedWeapon::setGoalPlayer1(const std::shared_ptr<Player> & goalPlayer1) {
	m_goalPlayer1 = goalPlayer1;
}

const std::shared_ptr<Player> & Event_MurderWithBorrowedWeapon::getGoalPlayer2() const {
	return m_goalPlayer2;
}

void Event_MurderWithBorrowedWeapon::setGoalPlayer2(const std::shared_ptr<Player> & goalPlayer2) {
	m_goalPlayer2 = goalPlayer2;
}

void Event_MurderWithBorrowedWeapon::eventResolve() const {
	//�����һ��װ����ɱ�¼���
//�ɹ�������Ƿ�Ϊ���컭ꪣ���������ֻ�����һ�����Ƶ�������
//	���㣺��������Ŀ�꣬��װɱ�¼�
//	�����㣺��װɱ�¼�
//ʧ�ܣ�������������
	// TODO - implement Event_MurderWithBorrowedWeapon::eventResolve
	throw "Not yet implemented";
}
