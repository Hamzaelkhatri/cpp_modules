#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde *zd = new ZombieHorde(4);
    zd->announce();
    delete zd;
    return 0;
}
