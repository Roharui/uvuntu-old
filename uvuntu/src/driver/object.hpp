#ifndef __UVUNTU_OBJECT__
#define __UVUNTU_OBJECT__

#include "../driver/detactor/detactor.hpp"

class Object {
public:
	virtual int execute(Detactor* data) = 0;
	virtual int show(void)              = 0;
};

#endif