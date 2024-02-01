#include "Span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.addNumber(11);

    std::cout << std::endl;
    Span sp2 = Span(10000);
    sp2.addMoreNumbers(10000, 0, 25000);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    std::cout << std::endl;
    Span sp3 = Span(1);
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
    return 0;
}