#ifndef HUMANB_H
#define HUMANB_H
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon Weapon;

public:
    HumanB(std::string name, class Weapon weapon);
    HumanB(std::string name);
    HumanB();
    ~HumanB();
    void setWeapon(class Weapon &weapon);
    void attack();
};

#endif