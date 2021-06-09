#include "Squad.hpp"

Squad::Squad() : count(0), units(nullptr)
{
}

Squad::Squad(Squad const &sq) : units(nullptr)
{
    this->count = 0;
}