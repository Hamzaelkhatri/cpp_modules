#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
private:
    int point_value;
    static const int RawBits = 8;

public:
    Fixed();
    Fixed(const Fixed &point);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &t);
    ~Fixed();
};

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->point_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->point_value = raw;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    point_value = 0;
}

Fixed &Fixed::operator=(const Fixed &t)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &t)
    {
        this->point_value = t.point_value;
    }
    return (*this);
}

Fixed::Fixed(const Fixed &point)
{
    std::cout << "Copy constructor called" << std::endl;
    point_value = point.point_value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

#endif