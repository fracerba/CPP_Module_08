#include "Span.hpp"

Span::Span() 
{
    n = 0;
    size = 0;
    v = new std::vector<int>[n];
}

Span::Span(unsigned int i) 
{
    this->n = i;
    size = 0;
    v = new std::vector<int>[n];
}

Span::Span(const Span &New) 
{
    this->n = New.n;
    this->size = New.size;
    this->v = new std::vector<int>[n];
    this->v = New.v;
}

Span::~Span() 
{
    delete [] v;
}

Span& Span::operator=(const Span &New) 
{
    if (this == &New)
        return (*this);
    delete [] v;
    this->n = New.n;
    this->size = New.size;
    this->v = new std::vector<int>[n];
    this->v = New.v;
    return (*this);
}

void Span::addNumber(int i) 
{
    try
    {
        if (size == n)
            throw FullArrayException();
        v->push_back(i);
        size++;
    }
    catch(FullArrayException &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::shortestSpan() 
{
    try
    {
        if (size < 2)
            throw NotEnoughNumbersException();
        std::sort(v->begin(), v->end());
        int min = v->at(1) - v->at(0);
        for (size_t i = 0; i + 1 < size; i++)
        {
            if (v->at(i + 1) - v->at(i) < min)
                min = v->at(i + 1) - v->at(i);
        }
        return (min);
    }
    catch(NotEnoughNumbersException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

int Span::longestSpan()
{
    try
    {
        if (size < 2)
            throw NotEnoughNumbersException();
        std::sort(v->begin(), v->end());
        int max = v->at(size - 1) - v->at(0);
        return (max);
    }
    catch(NotEnoughNumbersException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

void Span::addMoreNumbers(unsigned int i, int min, int max)
{
    try
    {
        if (size + i > n)
            throw FullArrayException();
        srand(time(NULL));
        for (size_t j = 0; j < i; j++)
        {
            v->push_back(rand() % (max - min + 1) + min);
            size++;
        }
    }
    catch(FullArrayException &e)
    {
        std::cerr << e.what() << '\n';
    }
}