#include "FragTrap.hpp"

FragTrap FragTrap::operator=(const FragTrap &op)
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

FragTrap::FragTrap(std::string Name) : ClapTrap(Name, 1, 100, 100, 50, 50, 20, 15, 3)
{
    srand(time(0));
    std::cout << this->Name << ": compiling ... !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fraptrap)
{
    std::cout << this->Name << ": Recompiling ... !" << std::endl;
    this->Name = fraptrap.Name;
    this->Level = fraptrap.Level;
    this->Hit_points = fraptrap.Hit_points;
    this->Max_hit_points = fraptrap.Max_hit_points;
    this->Energy_points = fraptrap.Energy_points;
    this->Max_energy_points = fraptrap.Max_energy_points;
    this->Melee_attack_damage = fraptrap.Melee_attack_damage;
    this->Ranged_attack_damage = fraptrap.Ranged_attack_damage;
    this->Armor_damage_reduction = fraptrap.Armor_damage_reduction;
}

std::string get_str(int i)
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

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (this->Energy_points >= 25)
    {
        this->Energy_points -= 25;
        std::cout << "" << this->Name << ": " << get_str((rand() % 5)) << " attacks "
                  << target << std::endl;
    }
    else
    {
        std::cout << "FR4G-TP " << this->Name
                  << " is out of energy!" << std::endl;
    }
}

FragTrap::~FragTrap()
{
    std::cout << this->Name << " is death." << std::endl;
}