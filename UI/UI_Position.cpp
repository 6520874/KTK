#include "UI_Position.h"
#include "cocos2d.h"
#include "Manager\TextManager.h"

using namespace cocos2d;
using namespace cocos2d::ui;

bool UI_Position::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;

	m_positionBackground = LayerColor::create(Color4B::BLACK);
	m_positionBackground->setContentSize(Size(40, 40));
	auto size = m_positionBackground->getContentSize();
	
	m_label = Label::create("", "ziti.otf", 30);
	m_label->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	m_label->setPosition(size.width / 2, size.height / 2);
	m_positionBackground->addChild(m_label);

	refresh();
	addChild(m_positionBackground);
	return true;
}

void UI_Position::refresh() {
	int position = m_player.lock()->getPosition();
	std::string str;
	switch (position) {
		case 1: str = "һ"; break;
		case 2: str = "��"; break;
		case 3: str = "��"; break;
		case 4: str = "��"; break;
		case 5: str = "��"; break;
		case 6: str = "��"; break;
		case 7: str = "��"; break;
		case 8: str = "��"; break;
		default: throw "Can't find match!"; break;
	}
	m_label->setString(TextManager::gbkToUtf8(str));
}
