#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iomanip>
#include <iostream>

class ClapTrap
{
private:
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
    ClapTrap(std::string Name, int Hit_points,
             int Max_hit_points, int Energy_points, int Max_energy_points,
             int Level, int Melee_attack_damage, int Ranged_attack_damage, int Armor_damage_reduction);
    ClapTrap(const ClapTrap &fraptrap);
    ClapTrap operator=(const ClapTrap &op);
    ClapTrap(void);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif