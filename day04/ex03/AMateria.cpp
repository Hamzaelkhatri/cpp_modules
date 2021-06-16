#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
    _xp = 0;
}

AMateria ::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return (type);
}

unsigned int AMateria::getXP() const
{
    return (_xp);
}

virtual void AMateria::use(ICharacter &target)
{
    (void)target;
    xp += 10;
}