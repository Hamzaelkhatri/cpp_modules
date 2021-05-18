#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

std::string Zombie::get_name()
{
    return (this->name);
}

std::string Zombie::get_type()
{
    return (this->type);
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::set_type(std::string type)
{
    this->type = type;
}

void Zombie::announce()
{
    std::cout << get_name() + "(" + get_type() + ") : zzzzzzzzzzzzz" << std::endl;
}