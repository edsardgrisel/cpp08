#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
public:
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	void addNumber(int num);
	void addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
	int shortestSpan();
	int longestSpan();

	class SpanNotFoundException : public std::exception
	{
		public:
			const char* what() const noexcept override;
	};


private:
	Span();
	unsigned int N;
	std::vector<int> array;

};

#endif // SPAN_HPP