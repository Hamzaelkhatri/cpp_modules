#ifndef FRAG_TRAP
#define FRAG_TRAP
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
    FragTrap(std::string Name);
    FragTrap(const FragTrap &fraptrap);
    FragTrap operator=(const FragTrap &op);
    void vaulthunter_dot_exe(std::string const &target);
    ~FragTrap();
};

#endif