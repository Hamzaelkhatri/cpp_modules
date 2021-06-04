#include "NinjaTrap.hpp"

NinjaTrap NinjaTrap::operator=(const NinjaTrap &op)
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

NinjaTrap::NinjaTrap(std::string Name) : ClapTrap(Name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    srand(time(0));
    std::cout << this->Name << ": compiling ... !" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninja)
{
    std::cout << this->Name << ": Recompiling ... !" << std::endl;
    this->Name = ninja.Name;
    this->Level = ninja.Level;
    this->Hit_points = ninja.Hit_points;
    this->Max_hit_points = ninja.Max_hit_points;
    this->Energy_points = ninja.Energy_points;
    this->Max_energy_points = ninja.Max_energy_points;
    this->Melee_attack_damage = ninja.Melee_attack_damage;
    this->Ranged_attack_damage = ninja.Ranged_attack_damage;
    this->Armor_damage_reduction = ninja.Armor_damage_reduction;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
    std::cout << ninja.Name << " NinjaTrap shoeBox" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
    std::cout << clap.getName() << " ClapTrap shoeBox" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
    std::cout << frag.getName() << " FragTrap shoeBox" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &frag)
{
    std::cout << frag.getName() << " ScavTrap shoeBox" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << this->Name << " is death." << std::endl;
}