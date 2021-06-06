#include "Victim.hpp"

Victim::Victim(std::string const &Name) : Name(Name)
{
    std::cout << "Some random victim called " << this->Name << " just appeared" << std::endl;
}

Victim::Victim(Victim const &victim) : Name(victim.Name)
{
    std::cout << "Some random victim called " << this->Name << " just appeared" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->Name << " just died for no apparent reason !" << std::endl;
}

Victim &Victim::operator=(Victim const &op)
{
    this->Name = op.Name;
    return (*this);
}

std::string const &Victim::getName(void) const
{
    return (this->Name);
}

void Victim::getPolymorphed(void) const
{
    std::cout << this->Name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &sorcerer)
{
    out << "I'm " << sorcerer.getName() << " and I like otters !" << std::endl;
    return (out);
}
