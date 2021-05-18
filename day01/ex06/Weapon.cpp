#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
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

std::string &Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(const std::string type)
{
    this->type = type;
}