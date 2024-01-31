#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;
    std::deque<int> d;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        l.push_back(10 - i);
        d.push_back(i + 2);
    }

    std::cout << "Vector: " << std::endl;
    try
    {
        easyfind(v, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(v, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(v, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    std::cout << "List: " << std::endl;
    try
    {
        easyfind(l, 7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(l, 12);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(l, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    std::cout << "Deque: " << std::endl;
    try
    {
        easyfind(d, 6);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(d, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(d, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}