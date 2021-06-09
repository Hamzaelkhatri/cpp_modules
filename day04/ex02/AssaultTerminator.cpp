#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &assault)
{
    std::cout << "* teleports from space *" << assault.clone() << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &assault)
{
    *this = assault;
    return (*this);
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
    AssaultTerminator *tmp = new AssaultTerminator(*this);
    return (tmp);
}

void AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
