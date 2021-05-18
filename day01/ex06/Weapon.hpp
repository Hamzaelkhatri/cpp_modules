#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    Weapon(const std::string type);
    ~Weapon();
    void setType(const std::string type);
    std::string &getType();
};

#endif