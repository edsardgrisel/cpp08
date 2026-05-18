#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>
#include <list>


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

	std::list<int> l = {0, 3, 6, 9};
	{
		std::list<int>::iterator it = easyFind(l, 0);
		if (it != l.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	{
		std::list<int>::iterator it = easyFind(l, 9);
		if (it != l.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	{
		std::list<int>::iterator it = easyFind(l, 42);
		if (it != l.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}

	std::deque<int> d = {0, 3, 6, 9};
	{
		std::deque<int>::iterator it = easyFind(d, 0);
		if (it != d.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	{
		std::deque<int>::iterator it = easyFind(d, 9);
		if (it != d.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	{
		std::deque<int>::iterator it = easyFind(d, 42);
		if (it != d.end())
			std::cout << *it << std::endl;
		else
			std::cout << "number not found" << std::endl;
	}
	return 0;
}
