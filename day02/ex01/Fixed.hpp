#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int point_value;
    static const int RawBits = 8;

public:
    Fixed();
    Fixed(const Fixed &point);
    Fixed(int value);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &t);
    float toFloat(void) const;
    int toInt(void) const;
    Fixed(const float value);
    ~Fixed();
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif