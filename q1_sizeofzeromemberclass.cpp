#include <iostream>

class Empty
{
	//int a;
};

int main()
{
	Empty e;
	std::cout << sizeof(e) << std::endl;
	return 0;
}
