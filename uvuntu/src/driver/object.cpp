
#include <raylib.h>
#include <iostream>
#include <vector>

#include "detactor/detactor.hpp"

class Object {
public:
	virtual int execute(Detactor * data)  = 0;
	virtual int show(void)                = 0;
};

