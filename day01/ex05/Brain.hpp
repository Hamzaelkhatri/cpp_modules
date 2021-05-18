#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include <iomanip>

class Brain
{
private:
    int cells;

public:
    Brain();
    ~Brain();
    std::string identify() const;
};

#endif