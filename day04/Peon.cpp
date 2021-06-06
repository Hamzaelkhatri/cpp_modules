#include "Peon.hpp"

Peon::Peon(std::string const &Name) : Victim(Name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &peon) : Victim(peon.Name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &op)
{
    this->Name = op.Name;
    return (*this);
}

void Peon::getPolymorphed(void) const
{
    std::cout << this->Name << " has been turned into a pink pony !" << std::endl;
}
