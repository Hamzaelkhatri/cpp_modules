#ifndef FRAG_TRAP
#define FRAG_TRAP
#include <iomanip>
#include <iostream>

class FragTrap
{
private:
    int Hit_points;
    int Max_hit_points;
    int Energy_points;
    int Max_energy_points;
    int Level;
    std::string Name;
    int Melee_attack_damage;
    int Ranged_attack_damage;
    int Armor_damage_reduction;

public:
    FragTrap(std::string Name);
    FragTrap(const FragTrap &fraptrap);
    FragTrap operator=(const FragTrap &op);
    FragTrap(void);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~FragTrap();
};

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at meel, causing " << this->Melee_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
}

void FragTrap::beRepaired(unsigned int amount)
{
}

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
}

FragTrap::~FragTrap()
{
}

#endif