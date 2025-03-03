#include <iostream>

class Virtual
{
	public:
	virtual ~Virtual(){}
};

int main()
{
	Virtual v;
	std::cout << sizeof(v); // will be the size of v_ptr = 8
	return 0;
}
