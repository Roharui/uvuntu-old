#ifndef __UVUNTU_DETACTOR__
#define __UVUNTU_DETACTOR__

struct MouseClick {
	bool left;
	bool right;
	bool middle;
};

class Detactor {
public:
	static Detactor* detact();
	Vector2 getClickLoc();
	MouseClick getMouseClick();
	int getKey();
};

#endif