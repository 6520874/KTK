#include "UI_HandCardPanal.h"

UI_HandCardPage* UI_HandCardPanal::getPageByIndex(int index) {
	//���ԣ�������Χ��
//����UI_handcardPage *
	// TODO - implement UI_HandCardPanal::getPageByIndex
	throw "Not yet implemented";
}

int UI_HandCardPanal::getCurrentPageIndex() {
	//����m_currentPageindex
	// TODO - implement UI_HandCardPanal::getCurrentPageIndex
	throw "Not yet implemented";
}

void UI_HandCardPanal::setCurrentPageIndex(int currentPageIndex) {
	//if(m_currentpage == currentpage) return;
//���ԣ���ȷ�ķ�Χ��
//��ҳִ��setvisible(false)
//��ҳִ��setvisible(true)
//����m_currentPageIndex
	// TODO - implement UI_HandCardPanal::setCurrentPageIndex
	throw "Not yet implemented";
}

void UI_HandCardPanal::pageUp() {
	//���ԣ���ȷ�ķ�Χ��
//����setcurrentPageIndex
	// TODO - implement UI_HandCardPanal::pageUp
	throw "Not yet implemented";
}

void UI_HandCardPanal::pageDown() {
	//���ԣ���ȷ�ķ�Χ��
//����setcurrentPageIndex
	// TODO - implement UI_HandCardPanal::pageDown
	throw "Not yet implemented";
}

void UI_HandCardPanal::addCard(std::shared_ptr<Card> card) {
	//��װUI_Card *,ѹ��addcardqueue
	// TODO - implement UI_HandCardPanal::addCard
	throw "Not yet implemented";
}

void UI_HandCardPanal::addCard(UI_Card* card) {
	//ѹ��addcardqueue
	// TODO - implement UI_HandCardPanal::addCard
	throw "Not yet implemented";
}

UI_Card* UI_HandCardPanal::removeCard(std::shared_ptr<Card> card) {
	//�ҵ������������ҳ������ҳ.����remove��Ȼ��return UI_Card *
//����needToResetΪtrue
	// TODO - implement UI_HandCardPanal::removeCard
	throw "Not yet implemented";
}

UI_Card* UI_HandCardPanal::removeCard(UI_Card* card) {
	//�ҵ������������ҳ������ҳ.����remove��Ȼ��return UI_Card *
//����needToResetΪtrue
	// TODO - implement UI_HandCardPanal::removeCard
	throw "Not yet implemented";
}

void UI_HandCardPanal::removeEmptyPage() {
	//�Ƴ��յĿ���ҳ�����õ�ǰҳΪ1
	// TODO - implement UI_HandCardPanal::removeEmptyPage
	throw "Not yet implemented";
}

void UI_HandCardPanal::reset() {
	//if(��ҳ��ֻΪ1)
//{-----------------------------------------------------------------------
//getcurrentpage().settleup(true);
//}-----------------------------------------------------------------------
//else
//{-----------------------------------------------------------------------
//setcurrentpage(0);
//getcurrentpage().settleup(true);
//�����е�2ҳ��removeAll�������п���ѹ��һ��������
//����һҳ��ȱ�������ƣ�����addcard
//ѭ�������¿���ҳ��ѹ����Щ���Ʋ�����settleup(false)
//����removeEmptypage
//}-----------------------------------------------------------------------
	// TODO - implement UI_HandCardPanal::reset
	throw "Not yet implemented";
}

void UI_HandCardPanal::for_each_card(std::function<void (UI_Card*)>& fun) {
	//�������п���ִ�д˺�����
	// TODO - implement UI_HandCardPanal::for_each_card
	throw "Not yet implemented";
}

void UI_HandCardPanal::update(float delta) {
	//if(needToReset) {����reset()������needtoresetΪfalse}
//---------------------------------------------------
//[[[[[[[[�����ӵĿ���ѹ�����ҳ�С�
//static bool canAddCard = true
//if( !addCardQueue.empty() && canAddCard ) 
//{
//canaddcard = false;
//auto lastpage = m_pages.back();
//int left =  UI_handCardpage::s_maxsize - lastpage.getSize()
//if(!left)
//{
//������ҳ��ѹ��m_pages.
//lastpage = m_pages.back();
//left = UI_handCardpage::s_maxsize;
//}
//setcurrentpageindex(m_pages.size() - 1);
//int length = std::min(left, addcardqueue.size());
//for(int i = 0; i < length; i++)
//{
//lastpage.addcard(addcardueue.popfront());
//}
//lastpage.setaddcardcardfinishCallback([]()
// {
// canaddcard = true;
// });
//}
////�����ӵĿ���ѹ�����ҳ�С�]]]]
//---------------------------------------------------
	// TODO - implement UI_HandCardPanal::update
	throw "Not yet implemented";
}

void UI_HandCardPanal::finish() {
	//�ƺ������п���setuppding(false)��setdark(false)��
	// TODO - implement UI_HandCardPanal::finish
	throw "Not yet implemented";
}
