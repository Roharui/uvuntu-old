#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

#include "object.hpp"

class Driver {
public:
    Driver(void);
    int run(void);
    void init(void);
    void push(Object* obj);
};

#endif