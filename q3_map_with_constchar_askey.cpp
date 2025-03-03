#include <map>
#include <iostream>


std::map<const char*, int> strMap;

/*
 * key have to be comparable
 * if const char* as key
 * then const char* can be compared to the other
 * what if comparing const char* to each other?
 * => only compare the first character, right?
 *
 * ---------ANSWER:----------
 *  will compare on the address of the first character of the "text"
 *
 */

int main()
{
	/*strMap.insert(std::make_pair("abcd", 1));
	if(strMap.find("abc") != strMap.end())
	{
		std::cout << "abc existed\n";
	}
	else{
		std::cout << "abc not existed\n";
	}*/

	// those will point to the same memory
	// then p1 is equal to p2 if you insert those to map
	const char* p1 = "test";
	const char* p2 = "test";
	strMap.insert(std::make_pair(p1, 1));
	if(strMap.find(p2) != strMap.end())
	{
		std::cout << "[1] exist!\n";
	}
	else
	{
		std::cout << "[1] not exist\n";
	}


	p1 = "new_test";// point to new memory but doesn affect to the map
	if(strMap.find(p2) != strMap.end())
	{
		std::cout << "[2] exist!\n";
	}
	else
	{
		std::cout << "[2] not exist\n";
	}


	return 0;
}
