#include <iomanip>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    static unsigned int _xp;
    std::string type;

public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    std::string const &getType() const;
    unsigned int getXP() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};