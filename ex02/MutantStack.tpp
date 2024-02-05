#include "MutantStack.hpp"

template <typename C> MutantStack<C>::MutantStack() : std::stack<C>()
{
}

template <typename C> MutantStack<C>::MutantStack(const MutantStack &New) : std::stack<C>(New)
{
}

template <typename C> MutantStack<C>::~MutantStack()
{
}

template <typename C> MutantStack<C> &MutantStack<C>::operator=(const MutantStack &New)
{
    this->c = New.c;
    return *this;
}

template <typename C> typename MutantStack<C>::iterator MutantStack<C>::begin()
{
    return std::stack<C>::c.begin();
}

template <typename C> typename MutantStack<C>::iterator MutantStack<C>::end()
{
    return std::stack<C>::c.end();
}

template <typename C> typename MutantStack<C>::const_iterator MutantStack<C>::cbegin() const
{
    return std::stack<C>::c.cbegin();
}

template <typename C> typename MutantStack<C>::const_iterator MutantStack<C>::cend() const
{
    return std::stack<C>::c.cend();
}

template <typename C> typename MutantStack<C>::reverse_iterator MutantStack<C>::rbegin()
{
    return std::stack<C>::c.rbegin();
}

template <typename C> typename MutantStack<C>::reverse_iterator MutantStack<C>::rend()
{
    return std::stack<C>::c.rend();
}

template <typename C> typename MutantStack<C>::const_reverse_iterator MutantStack<C>::crbegin() const
{
    return std::stack<C>::c.crbegin();
}

template <typename C> typename MutantStack<C>::const_reverse_iterator MutantStack<C>::crend() const
{
    return std::stack<C>::c.crend();
}

