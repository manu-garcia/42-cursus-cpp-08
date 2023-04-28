#include <iostream>

#include "Span.hpp"

Span::Span(): maxLenght(0)
{
    numbers.clear();
}

Span::Span(unsigned int maxLenght): maxLenght(maxLenght)
{
    numbers.clear();
}

Span::Span(const Span &span)
{
	*this = span;
}

Span::~Span() {}

Span &Span::operator=(const Span &span)
{
	maxLenght = span.maxLenght;
	numbers = span.numbers;
	return (*this);
}

void Span::addNumber(int number)
{
	if (numbers.size() >= maxLenght)
		throw std::exception();
	numbers.push_back(number);
}

void Span::addNumbers(void)
{
    std::srand(std::time(0));
    std::vector<int> randomNumbers(10000);
    for (int i = 0; i < 10000; i++)
    {
        randomNumbers[i] = std::rand() % 1000;
    }

    std::copy(randomNumbers.begin(), randomNumbers.end(),
              std::back_inserter(numbers));
}

int Span::shortestSpan(void)
{
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers to find shortest span.");
    }

    std::sort(numbers.begin(), numbers.end());
    int shortest = numbers[1] - numbers[0];

    for (size_t i = 2; i < numbers.size(); ++i) {
        int span = numbers[i] - numbers[i - 1];
        if (span < shortest) {
            shortest = span;
        }
    }

    return shortest;
}

int Span::longestSpan(void)
{
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers to find longest span.");
    }

    std::sort(numbers.begin(), numbers.end());
    return numbers[numbers.size() - 1] - numbers[0];
}
