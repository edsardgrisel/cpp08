#include "Span.hpp"

#include <iostream>

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        try
        {
            sp.addNumber(42);
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    {
        Span sp = Span(0);
        try
        {
            sp.addNumber(42);
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "--------------------------------" << std::endl;

    {
        Span sp = Span(1);
        sp.addNumber(1);

        try
        {
            sp.addNumber(42);
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "--------------------------------" << std::endl;

    {
        std::vector<int> vector = {1, 25, 5, 9, 19};
        Span             sp = Span(5);
        sp.addNumbers(vector.begin(), vector.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    {
        std::vector<int> vector = {1, 25, 5, 9, 19, 42};
        Span             sp = Span(5);
        try
        {
            sp.addNumbers(vector.begin(), vector.end());
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << "--------------------------------" << std::endl;

	{
        Span             sp = Span(10001);
		for (int i = 0; i < 10001; i++)
            sp.addNumber(i);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    return 0;
}