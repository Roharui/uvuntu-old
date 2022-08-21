
#include <iostream>

class Object {
private:
	int test = 0;
public:
	int execute(void);
	Object(void);
};

int Object::execute(void) {
	std::cout << "Hello!" << std::endl;

	return this->test;
}

Object::Object() { }