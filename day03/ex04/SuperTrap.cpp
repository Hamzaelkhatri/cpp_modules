#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
    std::cout << this->Name << ": compiling..." << std::endl;
    this->Hit_points = this->FragTrap::Hit_points;
    this->Max_hit_points = this->FragTrap::Max_hit_points;
    this->Energy_points = this->NinjaTrap::Energy_points;
    this->Max_energy_points = this->NinjaTrap::Max_energy_points;
    this->Melee_attack_damage = this->NinjaTrap::Melee_attack_damage;
    this->Ranged_attack_damage = this->FragTrap::Ranged_attack_damage;
    this->Armor_damage_reduction = this->FragTrap::Armor_damage_reduction;
}

void SuperTrap::meleeAttack(std::string &target)
{
    FragTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string &target)
{
    FragTrap::rangedAttack(target);
}

SuperTrap::SuperTrap(SuperTrap const &super) : ClapTrap(super.Name), NinjaTrap(super.Name), FragTrap(super.Name)
{
    std::cout << this->Name << ": compiling." << std::endl;
    this->Name = super.Name;
    this->Level = super.Level;
    this->Hit_points = super.Hit_points;
    this->Max_hit_points = super.Max_hit_points;
    this->Energy_points = super.Energy_points;
    this->Max_energy_points = super.Max_energy_points;
    this->Melee_attack_damage = super.Melee_attack_damage;
    this->Ranged_attack_damage = super.Ranged_attack_damage;
    this->Armor_damage_reduction = super.Armor_damage_reduction;
}

SuperTrap::~SuperTrap()
{
    std::cout << this->Name << ": SUPER DESTROYING." << std::endl;
}

SuperTrap SuperTrap::operator=(SuperTrap const &op)
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