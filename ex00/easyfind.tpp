#include "easyfind.hpp"

template <typename T> int easyfind(T& a, int i)
{
    typename T::iterator it = std::find(a.begin(), a.end(), i);

    if (it != a.end())
    {
        std::cout << "Found " << i << "at " << *it <<std::endl;
        return *it;
    }
    // else
    //     throw std::exception();
    return 0;
}