#include "ZombieHorde.hpp"

void ZombieHorde::announce()
{
    int i = 0;
    while (i < N)
    {
        std::cout << this->zd[i].get_name() << std::endl;
        i++;
    }
}

ZombieHorde::ZombieHorde(int N)
{
    int i = 0;
    this->zd = new Zombie[N];
    this->N = N;
    while (i < N)
    {
        srand(time(NULL));
        this->zd[i].set_name("ZOMBIE " + std::to_string((rand() / (i + 1))));
        i++;
    }
}

ZombieHorde::~ZombieHorde()
{
        delete[] this->zd;
}
