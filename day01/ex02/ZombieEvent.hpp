#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    Zombie zd;

public:
    ZombieEvent(/* args */);
    ~ZombieEvent();
    void setZombieType(std::string type);
};

Zombie *newZombie(std::string name);
void randomChump();
#endif