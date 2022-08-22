
#include <raylib.h>
#include <string>
#include <iostream>
#include <vector>

#include "object.hpp"
#include "detactor/detactor.hpp"
#include "../cursor/cursor.hpp"

#include "../config/config.hpp"


void cursorHide();

class Driver {

private:
    std::vector<Object*>* objs;

public:
    Driver(void);
	int run(void);
    void init(void);
    void push(Object* obj);
};

Driver::Driver(void) {
    this->objs = new std::vector<Object*>;
}

int Driver::run(void) {

    Detactor* detactor = nullptr;

    while (!WindowShouldClose())
    {
        cursorHide();

        detactor = Detactor::detact();

        for (Object* obj : *this->objs) {
            obj->execute(detactor);
        }

        BeginDrawing();

            ClearBackground(RAYWHITE);

            for (Object* obj : *this->objs) {
                obj->show();
            }

        EndDrawing();

    }
 
    CloseWindow();

    return 0;
}

void Driver::init() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);
    SetTargetFPS(60);

    Cursor* cursor = new Cursor;
    this->push(cursor);
}

void Driver::push(Object* obj) {
    this->objs->push_back(obj);
}

void cursorHide() {
    if (IsCursorOnScreen()) {
        HideCursor();
    }
}