#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <unistd.h>

int main()
{
    while (1)
    {
        randomChump();
        usleep(1000000);
    }

    return 0;
}
