#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <stack>
#include <exception>
#include <algorithm>

template<class C> 
class MutantStack : public std::stack<C>
{
    public:
        MutantStack();
        MutantStack(const MutantStack &New);
        ~MutantStack();
        MutantStack& operator=(const MutantStack &New);

        typedef typename std::stack<C>::container_type::iterator iterator;
        typedef typename std::stack<C>::container_type::const_iterator const_iterator;
        typedef typename std::stack<C>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<C>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin();
        iterator end();
        const_iterator cbegin() const;
        const_iterator cend() const;
        reverse_iterator rbegin();
        reverse_iterator rend();
        const_reverse_iterator crbegin() const;
        const_reverse_iterator crend() const;
};

#include "MutantStack.tpp"

#endif