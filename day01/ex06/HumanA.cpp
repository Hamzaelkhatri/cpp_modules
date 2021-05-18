#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name + " attacks with his " + this->weapon->getType() << std::endl;
}

void HumanA::setWeapon(class Weapon &weapon)
{
    this->weapon = &weapon;
}