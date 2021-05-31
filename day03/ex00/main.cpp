#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("FR4G");

    frag.vaulthunter_dot_exe("ENEMI332");
    frag.meleeAttack("ENEMI332");
    frag.rangedAttack("ENEMI332");
    frag.takeDamage(142);
    frag.beRepaired(200);
    frag.vaulthunter_dot_exe("ENEMI332");
    return (0);
}
