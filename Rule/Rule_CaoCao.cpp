#include "Rule_CaoCao.h"

void Rule_CaoCao::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//����¼�Ϊ�������¼����������󲼶�ֵ�¼���ѯ���Ƿ񷢶����ݣ�
//	�ǣ���������
//	�񣺵��û���preprocessingEvent
//���Ϊ�˺��¼����������󲼶�ֵ�¼���ѯ���Ƿ񷢶����ۣ�
//	�ǣ���������
//	�񣺵��û���preprocessingEvent
	// TODO - implement Rule_CaoCao::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_CaoCao::huJia(const std::shared_ptr<Event_RequestCard> & event) const {
	//static Player * currentPlayer = nullptr;
//static std::shared_ptr<Event_RequestCard> event = nullptr;
//static bool ������used = false;
//if(!event)	
//	event = ����;
//	currentPlayer = �ܲ�
//currentplayer = getnextPlayer([](){}) const;
//if(const currentPlayr != �ܲ�)
//	��currentplayer�������󲼶�ֵ�¼����Ƿ�Ϊ�������ݡ���
//		�ǣ�if(�а������Ұ�����used)������currentplayer������valid = false��
//		        else if(�а�������!������used) ������used = true;
//		        �����������¼���
//			���㣺�������event�����ݳɹ�����+���ݽ�������
//			�����㣺��������hujia()
//			����������currentplayer������valid = true;
//		�񣺼�������hujia()
//else
//	����ʧ�ܴ���+���ݽ�������

//����ʧ�ܴ������û����preprocessingEvent
//���ݳɹ�������������ǰ�¼�������Ϊ��Ӧ�ɹ�
//���ݽ�����������κ���İ�����valid = true������̬�������㡣
	// TODO - implement Rule_CaoCao::huJia
	throw "Not yet implemented";
}

void Rule_CaoCao::jianXiong(const std::shared_ptr<Event_Hurt> & event) const {
	//��ĵ��¼��еĿ��ơ�
	// TODO - implement Rule_CaoCao::jianXiong
	throw "Not yet implemented";
}
