#ifndef NINJA_TRAP
#define NINJA_TRAP
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
public:
    NinjaTrap(std::string Name);
    NinjaTrap(const NinjaTrap &fraptrap);
    NinjaTrap operator=(const NinjaTrap &op);
    void ninjaShoebox(NinjaTrap &ninja);
    void ninjaShoebox(ClapTrap &clap);
    void ninjaShoebox(FragTrap &frag);
    void ninjaShoebox(ScavTrap &frag);

    ~NinjaTrap();
};

#endif