
#include <raylib.h>
#include <iostream>

#include "src/driver/driver.hpp"

int main()
{
	std::cout << "Application running..." << std::endl;

	Driver *driver = new Driver;

	driver->init();

	int result = driver->run();

	return result;
}