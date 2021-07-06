#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iomanip>

template <typename T>
void easyFind(T &t, int i)
{
    int j = 0;
    while (j < t.size())
    {
        if (i == t.at(j))
        {
            std::cout << "exist at index " << j << std::endl;
            return;
        }
        j++;
    }
    throw std::exception();
}
#endif