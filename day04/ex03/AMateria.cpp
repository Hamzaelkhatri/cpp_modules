#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
    this->_xp = 0;
}

AMateria ::~AMateria()
{
}

std::string const &AMateria::getType(void) const
{
    return (type);
}

//unsigned int getXP() const
unsigned int AMateria::getXP(void) const
{
    return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    this->_xp += 10;
}