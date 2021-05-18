#ifndef HUMAN
#define HUMAN
#include <iostream>
#include <iomanip>
#include "Brain.hpp"

class Human
{

private:
public:
    const Brain brain;
    Human();
    ~Human();
    Brain const &getBrain() const;
    std::string identify() const;
};

#endif
