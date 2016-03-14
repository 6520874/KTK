#ifndef UI_HandCardPage_h__
#define UI_HandCardPage_h__

#include <vector>
#include "cocos2d.h"
#include "UI_Card.h"

class UI_HandCardPage : public cocos2d::Node {
public:
	static UI_HandCardPage * create() {
		UI_HandCardPage * pRet = new(std::nothrow) UI_HandCardPage();
		if (pRet && pRet->init()) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool init();
	std::vector<UI_Card *> & getCards();
	int getSize() const;
	bool isEmpty() const;
	bool isFull() const;
	void settleUp(bool useAction);
	cocos2d::Vec2 getPositionWithIndex(int index) const;
	bool hasCard(const std::shared_ptr<Card> & card) const;
	bool hasCard(const UI_Card * card) const;
	void addCard(const std::shared_ptr<Card> & card);
	void addCard(UI_Card * card);

	//���������Ƴ�card����������removeChild������Ȼ��Ҫ�ֶ�����removeChild�������Ƴ���
	UI_Card * removeCard(const std::shared_ptr<Card> & card);
	//���������Ƴ�card����������removeChild������Ȼ��Ҫ�ֶ�����removeChild�������Ƴ���
	UI_Card * removeCard(const UI_Card * card);
	//������������е�card����������removeChild������Ȼ��Ҫ�ֶ�����removeChild�������Ƴ���
	std::vector<UI_Card *> removeAll();
protected:
	UI_HandCardPage() = default;
private:
	const int m_maxSize = 7;
	std::vector<UI_Card *> m_cards;
	std::function<void()> m_addCardFinishCallBack;
};
#endif // UI_HandCardPage_h__
