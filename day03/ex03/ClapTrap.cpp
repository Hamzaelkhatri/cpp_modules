#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

std::string ClapTrap::getName()
{
    return (this->Name);
}

ClapTrap ClapTrap::operator=(const ClapTrap &op)
{
    this->Name = op.Name;
    this->Level = op.Level;
    this->Hit_points = op.Hit_points;
    this->Max_hit_points = op.Max_hit_points;
    this->Energy_points = op.Energy_points;
    this->Max_energy_points = op.Max_energy_points;
    this->Melee_attack_damage = op.Melee_attack_damage;
    this->Ranged_attack_damage = op.Ranged_attack_damage;
    this->Armor_damage_reduction = op.Armor_damage_reduction;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    std::cout << "ClapTrap : Recompiling ... !" << std::endl;
    this->Name = clap.Name;
    this->Level = clap.Level;
    this->Hit_points = clap.Hit_points;
    this->Max_hit_points = clap.Max_hit_points;
    this->Energy_points = clap.Energy_points;
    this->Max_energy_points = clap.Max_energy_points;
    this->Melee_attack_damage = clap.Melee_attack_damage;
    this->Ranged_attack_damage = clap.Ranged_attack_damage;
    this->Armor_damage_reduction = clap.Armor_damage_reduction;
}

ClapTrap::ClapTrap(std::string Name, int Hit_points,
                   int Max_hit_points, int Energy_points, int Max_energy_points,
                   int Level, int Melee_attack_damage, int Ranged_attack_damage, int Armor_damage_reduction)
{
    this->Name = Name;
    this->Level = Level;
    this->Hit_points = Hit_points;
    this->Max_hit_points = Max_hit_points;
    this->Energy_points = Energy_points;
    this->Max_energy_points = Max_energy_points;
    this->Melee_attack_damage = Melee_attack_damage;
    this->Ranged_attack_damage = Ranged_attack_damage;
    this->Armor_damage_reduction = Armor_damage_reduction;
    std::cout << "ClapTrap: compiling ... !" << std::endl;
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap DIE..." << std::endl;
}