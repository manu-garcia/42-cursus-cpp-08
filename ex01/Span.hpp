#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
private:
    unsigned int maxLenght;
    std::vector<int> numbers;

public:
    Span();
    Span(const Span &span);
    Span(unsigned int maxLenght);

    Span &operator=(const Span &span);

    ~Span();

    void addNumber(int number);
    void addNumbers(void);
    int shortestSpan(void);
    int longestSpan(void);
};

#endif
