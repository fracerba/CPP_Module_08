#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    std::cout << "MutantStack:" << std::endl;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::list<int> l;
    std::cout << "List:" << std::endl;

    l.push_back(5);
    l.push_back(17);

    std::cout << l.back() << std::endl;
    l.pop_back();
    std::cout << l.size() << std::endl;

    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);

    std::list<int>::iterator lit = l.begin();
    std::list<int>::iterator lite = l.end();

    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    return 0;
}