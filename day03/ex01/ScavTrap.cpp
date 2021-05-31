#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : Name(name)
{
    std::cout << this->Name << "Builiding..." << std::endl;
    this->Level = 1;
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 50;
    this->Max_energy_points = 50;
    this->Melee_attack_damage = 20;
    this->Ranged_attack_damage = 15;
    this->Armor_damage_reduction = 3;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << this->Name << " attacks " << target << " at meel, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

ScavTrap::ScavTrap(ScavTrap const &other) : Name(other.Name)
{
    std::cout << this->Name << "Builiding..." << std::endl;
    this->Level = other.Level;
    this->Hit_points = other.Hit_points;
    this->Max_hit_points = other.Max_hit_points;
    this->Energy_points = other.Energy_points;
    this->Max_energy_points = other.Max_energy_points;
    this->Melee_attack_damage = other.Melee_attack_damage;
    this->Ranged_attack_damage = other.Ranged_attack_damage;
    this->Armor_damage_reduction = other.Armor_damage_reduction;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->Name << " DIE..." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    this->Name = other.Name;
    this->Level = other.Level;
    this->Hit_points = other.Hit_points;
    this->Max_hit_points = other.Max_hit_points;
    this->Energy_points = other.Energy_points;
    this->Max_energy_points = other.Max_energy_points;
    this->Melee_attack_damage = other.Melee_attack_damage;
    this->Ranged_attack_damage = other.Ranged_attack_damage;
    this->Armor_damage_reduction = other.Armor_damage_reduction;
    return (*this);
}

std::string ScavTrap::get_str(int i)
{
    std::string s = "";
    switch (i)
    {
    case 0:
        s = "Bla bla ble";
        break;
    case 1:
        s = "BLE BLE BLE";
    case 2:
        s = "BLO BLO BLO";
    case 3:
        s = "BE BE BE";
    case 4:
        s = "BE BE BE";
    }
    return (s);
}

void ScavTrap::challengeNewcomer(void)
{
    std::cout << this->Name << ": " << this->get_str(rand() % 5) << std::endl;
}
