
#include <raylib.h>

#include <vector>
#include <string>

#include "../driver/object.hpp"

class Cursor : public Object {

private:
	Vector2 clickLoc;
	Texture2D cursor;

public:
	Cursor();
	int execute(Detactor* data);
	int show(void);
};

Cursor::Cursor() {
	this->clickLoc = { 0, 0 };
	Image cursor = LoadImage("./src/resources/cursor.png");
	ImageResize(&cursor, 14, 24);
	this->cursor = LoadTextureFromImage(cursor);
	UnloadImage(cursor);
}

int Cursor::execute(Detactor* data) {
	
	this->clickLoc = {
		data->getClickLoc().x,
		data->getClickLoc().y,
	};

	return 0;
}

int Cursor::show(void) {
	if (IsCursorOnScreen())
		DrawTexture(this->cursor, int(this->clickLoc.x), int(this->clickLoc.y), WHITE);
	return 0;
}