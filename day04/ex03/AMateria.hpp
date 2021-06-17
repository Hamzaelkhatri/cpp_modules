
#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iomanip>
#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{

protected:
    std::string type;
    unsigned int _xp;

public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    std::string const &getType() const;
    unsigned int getXP() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif