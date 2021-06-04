#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
    std::cout << this->Name << " Builiding..." << std::endl;
    this->Level = 1;
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 50;
    this->Max_energy_points = 50;
    this->Melee_attack_damage = 20;
    this->Ranged_attack_damage = 15;
    this->Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &scav)
{
    std::cout << this->Name << " Builiding..." << std::endl;
    this->Name = scav.Name;
    this->Armor_damage_reduction = scav.Armor_damage_reduction;
    this->Energy_points = scav.Energy_points;
    this->Hit_points = scav.Hit_points;
    this->Level = scav.Level;
    this->Max_energy_points = scav.Max_energy_points;
    this->Max_hit_points = scav.Max_hit_points;
    this->Melee_attack_damage = scav.Melee_attack_damage;
    this->Name = scav.Name;
    this->Ranged_attack_damage = scav.Ranged_attack_damage;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->Name << " DIE..." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &op)
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
