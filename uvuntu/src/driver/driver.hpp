#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

#include <vector>
#include <string>

#include "object.hpp"

int WINDOW_WIDTH;
int WINDOW_HEIGHT;

std::string WINDOW_NAME;

class Driver {

private:

    std::vector<Object> objs;

public:
    int run(void);
    void init(void);
    void push(Object obj);
    std::string testCode(std::string text);
};

#endif