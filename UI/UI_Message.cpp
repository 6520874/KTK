#include "UI_Message.h"

bool UI_Message::init() {
	throw "Not yet implemented";
	return true;
}

void UI_Message::setString(const std::string & string) {
	// TODO - implement UI_Message::setString
	throw "Not yet implemented";
}

void UI_Message::setVisible(bool visible) {
	//true����scheduleUpdate
//false����unscheduleUpdate
	// TODO - implement UI_Message::setVisible
	throw "Not yet implemented";
}

void UI_Message::setButton1ValidCheck(const std::function<bool()> & button1ValidCheck) {
	throw "Not yet implemented";
}

void UI_Message::setButton2ValidCheck(const std::function<bool ()> & button2ValidCheck) {
	throw "Not yet implemented";
}

void UI_Message::setButton1CallBack(const std::function<void (const std::shared_ptr<Event_Base> &)> & button1CallBack) {
	// TODO - implement UI_Message::setButton1CallBack
	throw "Not yet implemented";
}

void UI_Message::setButton2CallBack(const std::function<void (const std::shared_ptr<Event_Base> &)> & button2CallBack) {
	// TODO - implement UI_Message::setButton2CallBack
	throw "Not yet implemented";
}

void UI_Message::update(float delta) {
	//����validcheck��ȷ����ť�Ƿ���Ч
	// TODO - implement UI_Message::update
	throw std::logic_error("The method or operation is not implemented.");
}
