#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
    int N;
    Zombie *zd;

public:
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();
};
