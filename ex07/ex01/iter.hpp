#ifndef ITER_H
#define ITER_H
#include <iostream>

template <typename T>
void print(T v)
{
    std::cout << "--->" << v << std::endl;
}

template <typename T>
void iter(T *a, int l, void (*mapi)(T))
{
    int i = 0;
    while (i < l)
    {
        print(a[i]);
        i++;
    }
    std::cout << "finish iter" << std::endl;
}

#endif