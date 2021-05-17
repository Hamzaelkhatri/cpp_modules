#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    Zombie zd;

public:
    void setZombieType(std::string type);
    ZombieEvent(/* args */);
    ~ZombieEvent();
};

Zombie *newZombie(std::string name);

#endif