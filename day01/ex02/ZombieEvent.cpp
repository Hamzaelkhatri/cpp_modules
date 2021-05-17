#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type)
{
    this->zd.set_type(type);
}

Zombie *newZombie(std::string name)
{
    Zombie *zd = new Zombie("ZOMBIE 1");
    zd->set_type("master");
    return (zd);
}