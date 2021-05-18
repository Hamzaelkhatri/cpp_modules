#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
    std::ostringstream buffer;
    buffer << this;
    return (buffer.str());
}