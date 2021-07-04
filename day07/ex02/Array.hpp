#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <exception>

template <typename T>
class Array
{
private:
    T *t;
    unsigned int n;

public:
    Array();
    Array(unsigned int i);
    Array(Array const &src);
    Array<T> &operator=(Array const &src);
    T &operator[](size_t i);
    unsigned int size(void) const;
    ~Array();
};

template <typename T>
Array<T>::Array()
{
    t = new T[0];
    if (!t)
        throw new std::exception();
}

template <typename T>
Array<T>::Array(unsigned int n) : n(n)
{
    t = new T[n];
    if (!t)
        throw new std::exception();
}

template <typename T>
T &Array<T>::operator[](size_t i)
{
    if (i >= n || i < 0)
        throw std::exception();
    return t[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
    unsigned int i = 0;
    t = new T[n];
    this->n = src.n;
    if (!t)
        throw new std::exception();
    else
        while (i < n)
        {
            t[i] = src.t[i];
            i++;
        }
    return (*this);
}

template <typename T>
Array<T>::Array(Array const &src)
{
    *this = src;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return (n);
}

template <typename T>
Array<T>::~Array()
{
}
#endif