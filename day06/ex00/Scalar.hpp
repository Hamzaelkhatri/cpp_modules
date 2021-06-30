#ifndef SCALAR_HPP
#define SCALAR_HPP
#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>
#include <limits>
#include <ctype.h>
class Scalar
{
private:
    std::string input;
    char _charValue;
    float _floatValue;
    double _DoubleValue;
    int _IntValue;
    Scalar();

public:
    Scalar(std::string input);
    Scalar(Scalar &src);
    Scalar &operator=(Scalar &src);

    //check type function
    int check_int(std::string str);
    int check_float(std::string str);
    int check_double(std::string str);
    bool is_floatPseudo();
    bool is_DoublePseudo();

    class EmptyStringException : public std::exception
    {
        const char *what() const throw();
    };

    //parse && execute
    void execute();

    //print function
    void print_int();
    void print_char();
    void print_double();
    void print_float();

    virtual ~Scalar();
};

#endif