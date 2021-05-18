#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    setType(type);
}

Weapon::Weapon()
{
    setType(type);
}

Weapon::~Weapon()
{
}

std::string const &Weapon::getType() const
{
    return (this->type);
}

void  Weapon::setType(const std::string &type) 
{
    std::string str = type;
    this->type = str;
}