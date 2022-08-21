
#include <raylib.h>
#include <string>
#include <iostream>
#include <vector>

#include "object.hpp"

const int WINDOW_WIDTH  = 800;
const int WINDOW_HEIGHT = 450;

char WINDOW_NAME[7] = "uvuntu";

class Driver {

private:

    std::vector<Object*> objs;

public:
	int run(void);
    void init(void);
    void push(Object* obj);
    std::string testCode(std::string text);
};

int Driver::run(void) {
    while (!WindowShouldClose())
    {

        for (Object* obj : this->objs) {
            (*obj).execute();
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}

void Driver::init() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);
    SetTargetFPS(60);

    Object obj;
    this->push(&obj);
}

void Driver::push(Object* obj) {
    this->objs.push_back(obj);
}

std::string Driver::testCode(std::string text) {
    std::cout << text << std::endl;

    return text;
}