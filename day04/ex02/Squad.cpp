#include "Squad.hpp"

Squad::Squad() : count(0), units(nullptr)
{
}

Squad::~Squad()
{
}

Squad::Squad(Squad const &sq) : units(nullptr)
{
    (Squad) sq;
    this->count = 0;
}

ISpaceMarine *Squad::getUnit(int index) const
{
    if (index < 0 || index > count || !units[index])
    {
        return (nullptr);
    }
    return (units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
    int i = 0;
    if (count == 0)
    {
        this->units = new ISpaceMarine *[1];
        this->units[0] = unit;
        this->count = 1;
    }
    else
    {
        ISpaceMarine **tmp = new ISpaceMarine *[count + 1];
        while (i < this->count)
        {
            tmp[i] = units[i];
            i++;
        }
        tmp[i] = unit;
        delete[] units;
        units = tmp;
        this->count++;
    }
    return (this->count);
}

int Squad::getCount(void) const
{
    return (this->count);
}

Squad &Squad::operator=(Squad const &squad)
{
    *this = squad;
    return (*this);
}
