#include "FragTrap.hpp"

FragTrap FragTrap::operator=(const FragTrap &op)
{
    if (this != &op)
    {
        this->Name = op.Name;
        this->Armor_damage_reduction = op.Armor_damage_reduction;
        this->Energy_points = op.Energy_points;
        this->Hit_points = op.Hit_points;
        this->Level = op.Level;
        this->Max_energy_points = op.Max_energy_points;
        this->Max_hit_points = op.Max_hit_points;
        this->Melee_attack_damage = op.Melee_attack_damage;
        this->Name = op.Name;
        this->Ranged_attack_damage = op.Ranged_attack_damage;
    }
    return (*this);
}

FragTrap::FragTrap(void)
{
}

FragTrap::FragTrap(const FragTrap &fraptrap)
{
    if (this != &fraptrap)
    {
        this->Name = fraptrap.Name;
        this->Armor_damage_reduction = fraptrap.Armor_damage_reduction;
        this->Energy_points = fraptrap.Energy_points;
        this->Hit_points = fraptrap.Hit_points;
        this->Level = fraptrap.Level;
        this->Max_energy_points = fraptrap.Max_energy_points;
        this->Max_hit_points = fraptrap.Max_hit_points;
        this->Melee_attack_damage = fraptrap.Melee_attack_damage;
        this->Name = fraptrap.Name;
        this->Ranged_attack_damage = fraptrap.Ranged_attack_damage;
        std::cout << this->Name << ": Recompiling THE CODE !" << std::endl;
    }
}

FragTrap::FragTrap(std::string Name) : Name(Name),
                                       Hit_points(100),
                                       Max_hit_points(100),
                                       Energy_points(100),
                                       Max_energy_points(100),
                                       Level(1),
                                       Melee_attack_damage(30),
                                       Ranged_attack_damage(20),
                                       Armor_damage_reduction(5)
{
    srand(time(0));
    std::cout << this->Name << ": compiling THE CODE !" << std::endl;
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
        std::cout << this->Name << ": "
                  << get_str(rand() % 4) << std::endl
                  << this->Name << " attacks "
                  << target << " with " << ((rand() % this->Melee_attack_damage) + 1)
                  << " points of damage!" << std::endl;
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