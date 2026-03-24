#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int> v = {0, 3, 6, 9};
	{
		std::vector<int>::iterator it = easyFind(v, 0);
		if (it != v.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	{
		std::vector<int>::iterator it = easyFind(v, 9);
		if (it != v.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	{
		std::vector<int>::iterator it = easyFind(v, 42);
		if (it != v.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	return 0;
}
