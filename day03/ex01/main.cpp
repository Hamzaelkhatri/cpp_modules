#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap frag("FR4G");
    ScavTrap scav("SC4V");

    srand(time(NULL));
    frag.vaulthunter_dot_exe("CL4P-TP");
    frag.meleeAttack("CL4P-TP");
    frag.rangedAttack("CL4P-TP");
    frag.takeDamage(24);
    frag.beRepaired(50);
    frag.takeDamage(42);
    frag.takeDamage(100);
    frag.beRepaired(125);
    frag.vaulthunter_dot_exe("CL4P-TP");
    frag.vaulthunter_dot_exe("CL4P-TP");
    frag.vaulthunter_dot_exe("CL4P-TP");
    frag.vaulthunter_dot_exe("CL4P-TP");

    std::cout << "---" << std::endl;

    scav.challengeNewcomer();
    scav.meleeAttack("CL4P-TP");
    scav.rangedAttack("CL4P-TP");
    scav.beRepaired(50);
    scav.takeDamage(20);
    scav.beRepaired(125);
    return (0);

    return (0);
}
