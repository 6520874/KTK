#include "UI_HandCardPanal.h"

UI_HandCardPage* UI_HandCardPanal::getPageByIndex(const int index) const {
	//���ԣ�������Χ��
//����UI_handcardPage *
	// TODO - implement UI_HandCardPanal::getPageByIndex
	throw "Not yet implemented";
}

int UI_HandCardPanal::getCurrentPageIndex() const {
	//����m_currentPageindex
	// TODO - implement UI_HandCardPanal::getCurrentPageIndex
	throw "Not yet implemented";
}

void UI_HandCardPanal::setCurrentPageIndex(const int currentPageIndex) const {
	//if(const m_currentpage == currentpage) return;
//���ԣ���ȷ�ķ�Χ��
//��ҳִ��setvisible(const false)
//��ҳִ��setvisible(const true)
//����m_currentPageIndex
	// TODO - implement UI_HandCardPanal::setCurrentPageIndex
	throw "Not yet implemented";
}

void UI_HandCardPanal::pageUp() const {
	//���ԣ���ȷ�ķ�Χ��
//����setcurrentPageIndex
	// TODO - implement UI_HandCardPanal::pageUp
	throw "Not yet implemented";
}

void UI_HandCardPanal::pageDown() const {
	//���ԣ���ȷ�ķ�Χ��
//����setcurrentPageIndex
	// TODO - implement UI_HandCardPanal::pageDown
	throw "Not yet implemented";
}

void UI_HandCardPanal::addCard(const std::shared_ptr<Card> card) const {
	//��װUI_Card *,ѹ��addcardqueue
	// TODO - implement UI_HandCardPanal::addCard
	throw "Not yet implemented";
}

void UI_HandCardPanal::addCard(const UI_Card* card) const {
	//ѹ��addcardqueue
	// TODO - implement UI_HandCardPanal::addCard
	throw "Not yet implemented";
}

UI_Card* UI_HandCardPanal::removeCard(const std::shared_ptr<Card> card) const {
	//�ҵ������������ҳ������ҳ.����remove��Ȼ��return UI_Card *
//����needToResetΪtrue
	// TODO - implement UI_HandCardPanal::removeCard
	throw "Not yet implemented";
}

UI_Card* UI_HandCardPanal::removeCard(const UI_Card* card) const {
	//�ҵ������������ҳ������ҳ.����remove��Ȼ��return UI_Card *
//����needToResetΪtrue
	// TODO - implement UI_HandCardPanal::removeCard
	throw "Not yet implemented";
}

void UI_HandCardPanal::removeEmptyPage() const {
	//�Ƴ��յĿ���ҳ�����õ�ǰҳΪ1
	// TODO - implement UI_HandCardPanal::removeEmptyPage
	throw "Not yet implemented";
}

void UI_HandCardPanal::reset() const {
	//if(��ҳ��ֻΪ1)
//{-----------------------------------------------------------------------
//getcurrentpage().settleup(const true) const;
//}-----------------------------------------------------------------------
//else
//{-----------------------------------------------------------------------
//setcurrentpage(0) const;
//getcurrentpage().settleup(const true) const;
//�����е�2ҳ��removeAll�������п���ѹ��һ��������
//����һҳ��ȱ�������ƣ�����addcard
//ѭ�������¿���ҳ��ѹ����Щ���Ʋ�����settleup(const false)
//����removeEmptypage
//}-----------------------------------------------------------------------
	// TODO - implement UI_HandCardPanal::reset
	throw "Not yet implemented";
}

void UI_HandCardPanal::for_each_card(const std::function<void (const UI_Card*)>& fun) const {
	//�������п���ִ�д˺�����
	// TODO - implement UI_HandCardPanal::for_each_card
	throw "Not yet implemented";
}

void UI_HandCardPanal::update(const float delta) const {
	//if(const needToReset) const {����reset()������needtoresetΪfalse}
//---------------------------------------------------
//[[[[[[[[�����ӵĿ���ѹ�����ҳ�С�
//static bool canAddCard = true
//if( !addCardQueue.empty() && canAddCard ) 
//{
//canaddcard = false;
//auto lastpage = m_pages.back() const;
//int left =  UI_handCardpage::s_maxsize - lastpage.getSize()
//if(!left)
//{
//������ҳ��ѹ��m_pages.
//lastpage = m_pages.back() const;
//left = UI_handCardpage::s_maxsize;
//}
//setcurrentpageindex(const m_pages.size() - 1) const;
//int length = std::min(const left, const addcardqueue.size()) const;
//for(const int i = 0; i < length; i++)
//{
//lastpage.addcard(const addcardueue.popfront()) const;
//}
//lastpage.setaddcardcardfinishCallback([]()
// {
// canaddcard = true;
// }) const;
//}
////�����ӵĿ���ѹ�����ҳ�С�]]]]
//---------------------------------------------------
	// TODO - implement UI_HandCardPanal::update
	throw "Not yet implemented";
}

void UI_HandCardPanal::finish() const {
	//�ƺ������п���setuppding(const false)��setdark(const false)��
	// TODO - implement UI_HandCardPanal::finish
	throw "Not yet implemented";
}
