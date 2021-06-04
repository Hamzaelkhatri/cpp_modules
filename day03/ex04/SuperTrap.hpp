#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
private:
    SuperTrap();

public:
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const &super);
    ~SuperTrap();

    void rangedAttack(std::string &target);
    void meleeAttack(std::string &target);
    SuperTrap operator=(SuperTrap const &op);
};

#endif
