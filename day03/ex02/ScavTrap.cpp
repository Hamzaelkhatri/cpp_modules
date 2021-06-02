#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name,1,100,100,50,50,20,15,3)
{
    std::cout << this->Name << "Builiding..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
    std::cout << this->Name << "Builiding..." << std::endl;
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
