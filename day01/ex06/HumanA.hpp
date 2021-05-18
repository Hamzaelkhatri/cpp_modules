#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    HumanA(std::string name);
    HumanA();
    ~HumanA();
    void setWeapon(class Weapon &weapon);
    void attack();
};

#endif