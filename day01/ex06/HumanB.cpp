#include "HumanB.hpp"

HumanB::HumanB(std::string name,class Weapon weapon)
{
    this->name = name;
    this->Weapon = weapon;
}

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    std::cout << this->name + " attacks with his " + this->Weapon.getType() << std::endl;
}

void HumanB::setWeapon(class Weapon &weapon)
{
    this->Weapon = weapon;
}