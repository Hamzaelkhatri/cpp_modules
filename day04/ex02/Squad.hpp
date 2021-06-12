#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <cstddef>
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
    int count;
    ISpaceMarine **units;

public:
    Squad();
    Squad(Squad const &sq);
    virtual ~Squad();
    Squad &operator=(Squad const &squad);
    int getCount(void) const;
    ISpaceMarine *getUnit(int index) const;
    int push(ISpaceMarine *unit);
};

#endif
