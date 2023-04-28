
#include <iostream>

#include "Span.hpp"

int main()
{
    Span span(10000);
    span.addNumbers();

    std::cout << "Getting shortest and longest span in vector: " << std::endl;
    std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span.longestSpan() << std::endl;
    std::cout << std::endl;

    // Test maxLenght reached
    try
    {
        std::cout << "Testing max leght of span" << std::endl;
        Span smallSpan(10);
        for (int i = 1; i <= 100; i++)
        {
            smallSpan.addNumber(i);
            std::cout << "Span with max 10 elements has added the number: " << i << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Span with max 10 elements has reached its max lenght." << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Testing subject example" << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    return 0;
}
