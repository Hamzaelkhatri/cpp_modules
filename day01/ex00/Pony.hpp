#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>

class Pony
{
private:
    std::string name;

public:
    Pony();
    std::string get_name();
    Pony(std::string name);
    ~Pony();
};
#endif