#ifndef SPAN_HPP
#define SPAN_HPP

#include <span>
#include <iostream>
#include <iomanip>

class Span
{
private:
    unsigned int n;
    // std::span<int> num;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &src);
    Span &operator=(const Span &src);
    unsigned int getN();
    ~Span();
};

Span &Span::operator=(const Span &src)
{
    this->n = src.n;
    return (*this);
}

Span::Span(const Span &src)
{
    *this = src;
}

void addNumber(unsigned int n)
{

}

Span::Span(unsigned int n): n(n)
{
    
}

Span::Span()
{
}

Span::~Span()
{
}


#endif