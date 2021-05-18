#include "HumanA.hpp"

HumanA::HumanA(std::string name,class Weapon weapon)
{
    this->name = name;
    this->Weapon = weapon;
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
    std::cout << this->name + " attacks with his " + this->Weapon.getType() << std::endl;
}

void HumanA::setWeapon(class Weapon weapon)
{
    this->Weapon = weapon;
}