#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
    Sorcerer();

    std::string name;
    std::string title;

public:
    Sorcerer(std::string const &name, std::string const &title);
    Sorcerer(const Sorcerer &other);
    ~Sorcerer();

    Sorcerer &operator=(const Sorcerer &other);

    std::string const &getName(void) const;
    std::string const &getTitle(void) const;

    void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif