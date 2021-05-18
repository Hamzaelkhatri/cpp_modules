#include "ZombieEvent.hpp"
#include <iomanip>

void ZombieEvent::setZombieType(std::string type)
{
    this->zd.set_type(type);
}

Zombie *newZombie(std::string name)
{
    Zombie *zd = new Zombie(name);
    zd->set_type("master");
    return (zd);
}

void randomChump()
{
    srand(time(NULL));
    Zombie *zd = newZombie("zombie " + std::to_string(rand()));
    zd->announce();
    delete zd;
}