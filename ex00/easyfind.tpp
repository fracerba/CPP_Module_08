#include "easyfind.hpp"

template <typename T> bool easyfind(T& a, int i)
{
    typename T::iterator it = std::find(a.begin(), a.end(), i);

    std::cout << "Value: " << i;
    if (it != a.end())
    {
        std::cout << "   Found: " << *it <<std::endl;
        return true;
    }
    else
        throw std::runtime_error("  Value not found");
    return false;
}