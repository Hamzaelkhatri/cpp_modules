#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(int argc, char const *argv[])
{
    ZombieHorde *zd = new ZombieHorde(4);
    zd->announce();
    zd->~ZombieHorde();
    return 0;
}
