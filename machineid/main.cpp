
#include <iostream>
#include "machineid/machineid.h"

int main()
{
	extern std::string md5(std::string dat);

	std::cout << md5(machineid::machineHash()) << std::endl;
	system("pause");

	return 0;
}