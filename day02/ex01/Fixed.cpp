#include "Fixed.hpp"

int Fixed::getRawBits(void) const
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

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    point_value = value << this->RawBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Int constructor called" << std::endl;
    point_value = (int)(roundf(value * 256));
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

float Fixed::toFloat(void) const
{
    return (float)this->point_value / 256;
}

int Fixed::toInt(void) const
{
    return this->point_value >> this->RawBits;
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

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}