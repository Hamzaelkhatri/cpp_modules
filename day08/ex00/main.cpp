#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> g1;
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
    try
    {
        easyFind(g1, 5);
    }
    catch (const std::exception &e)
    {
        std::cerr << "number not found" << '\n';
    }
    return 0;
}
