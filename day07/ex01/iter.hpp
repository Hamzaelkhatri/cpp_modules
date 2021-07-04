#ifndef ITER_H
#define ITER_H
#include <iostream>

template <typename T>
void print(T v)
{
    std::cout << v << std::endl;
}

template <typename T>
void iter(T *a, int l, void (*prt)(T))
{
    int i = 0;
    while (i < l)
    {
        prt(a[i]);
        i++;
    }
}

#endif