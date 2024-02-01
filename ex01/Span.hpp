#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
    private:
        unsigned int n;
        unsigned int size;
        std::vector<int> *v;

    public:
        Span();
        Span(unsigned int i);
        Span(const Span &New);
        ~Span();
        Span& operator=(const Span &New);

        void addNumber(int i);
        int shortestSpan();
        int longestSpan();
        void addMoreNumbers(unsigned int i, int min, int max);

        class FullArrayException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Array is full");
                }
        };

        class NotEnoughNumbersException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Not enough numbers");
                }
        };
};

#endif