#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    ScavTrap();

public:
    ScavTrap(std::string const name);
    ScavTrap(ScavTrap const &other);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap const &other);
    std::string get_str(int i);
    void challengeNewcomer(void);
};

#endif
