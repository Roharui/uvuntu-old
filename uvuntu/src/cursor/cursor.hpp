#ifndef __UVUNTU_CURSOR__
#define __UVUNTU_CURSOR__

#include <vector>
#include <string>

#include "../driver/object.hpp"

class Cursor : public Object {
public:
	Cursor(void);
	int execute(Detactor* data);
	int show(void);
};

#endif