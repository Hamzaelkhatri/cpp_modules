#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
private:
    ScavTrap();

    int Hit_points;
    int Max_hit_points;
    int Energy_points;
    int Max_energy_points;
    int Level;
    std::string Name;
    int Melee_attack_damage;
    int Ranged_attack_damage;
    int Armor_damage_reduction;

public:
    ScavTrap(std::string const name);
    ScavTrap(ScavTrap const &other);
    virtual ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &other);
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    std::string get_str(int i);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(void);
};

#endif
