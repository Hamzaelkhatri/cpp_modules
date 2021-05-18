#ifndef HUMANA_H
#define HUMANA_H
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon Weapon;

public:
    HumanA(std::string name, class Weapon weapon);
    HumanA(std::string name);
    HumanA();
    ~HumanA();
    void setWeapon(class Weapon weapon);
    void attack();
};

#endif