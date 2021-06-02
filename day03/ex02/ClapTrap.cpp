#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
}

ClapTrap::ClapTrap(std::string Name,int Hit_points,
int Max_hit_points,int Energy_points,int Max_energy_points,
int Level,int Melee_attack_damage,int Ranged_attack_damage,int Armor_damage_reduction)
{
    srand(time(0));
    std::cout << this->Name << "ClapTrap : compiling THE CODE !" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << this->Name << " attacks " << target << " at meel, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int point = amount - this->Armor_damage_reduction;
    this->Hit_points -= point;
    if (this->Hit_points < 0)
    {
        point += this->Hit_points;
        this->Hit_points = 0;
    }
    std::cout << this->Name << " take "
              << point << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int healed = amount;
    this->Hit_points += amount;
    if (this->Hit_points > this->Max_hit_points)
    {
        healed -= (this->Hit_points - this->Max_hit_points);
        this->Hit_points = this->Max_hit_points;
    }
    std::cout << this->Name << " is repaired for "
              << healed << "!" << std::endl;
}
