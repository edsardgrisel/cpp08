#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

// Public
Span::Span(int N) : N(N)
{
}

Span::Span(const Span& other) : N(other.N) 
{
	this->array = other.array;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->array = other.array;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (this->array.size() >= this->N)
		throw std::out_of_range("Limit of N integers reached. Can't add number");
	else
		this->array.push_back(num);
}

void Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (static_cast<size_t>(last - first) > this->N - this->array.size())
		throw std::out_of_range("Limit of N integers reached. Can't add number");
	// todo: insert ints in list
	this->array.insert(this->array.end(), first, last);
}

int Span::shortestSpan()
{
	if (this->array.size() <= 1)
		throw Span::SpanNotFoundException();
	size_t shortestSpan;
	size_t curSpan;
	std::vector<int> tmp = this->array;
	std::sort(tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size() - 1; i++)
	{
		if (i == 0)
		{
			shortestSpan = tmp[i + 1] - tmp[i];
			continue;
		}
		curSpan = tmp[i + 1] - tmp[i];
		if (curSpan < shortestSpan)
			shortestSpan = curSpan;
	}
	return (shortestSpan);
}

int Span::longestSpan()
{
	if (this->array.size() <= 1)
		throw Span::SpanNotFoundException();
	std::vector<int> tmp = this->array;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

const char* Span::SpanNotFoundException::what() const noexcept
{
	return "No span can't be found with 0 or 1 elements.";
}


// Private
Span::Span() : N(0) {}
