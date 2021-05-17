#include "Pony.hpp"

Pony::Pony()
{
}

Pony::Pony(std::string name) : name(name)
{
}

Pony::~Pony()
{
}

std::string Pony::get_name()
{
    return (this->name);
}