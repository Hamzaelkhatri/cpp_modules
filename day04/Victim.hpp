#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
protected:
    Victim();

    std::string Name;

public:
    Victim(std::string const &Name);
    Victim(const Victim &victim);
    virtual ~Victim();

    Victim &operator=(const Victim &op);

    std::string const &getName(void) const;
    virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &sorcerer);

#endif
