#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iomanip>
#include <iostream>

class ClapTrap
{
protected:
    int Hit_points;
    int Max_hit_points;
    int Energy_points;
    int Max_energy_points;
    int Level;
    int Melee_attack_damage;
    int Ranged_attack_damage;
    std::string Name;
    int Armor_damage_reduction;

public:
    ClapTrap(std::string Name, int Hit_points,
             int Max_hit_points, int Energy_points, int Max_energy_points,
             int Level, int Melee_attack_damage, int Ranged_attack_damage, int Armor_damage_reduction);
    ClapTrap(const ClapTrap &clap);
    ClapTrap operator=(const ClapTrap &op);
    ClapTrap(std::string Name);
    ClapTrap(void);
    void beRepaired(unsigned int amount);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    std::string getName();
    ~ClapTrap();
};

#endif