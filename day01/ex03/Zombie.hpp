#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
    std::string name;
    std::string type;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    std::string get_name();
    std::string get_type();
    void announce();
    void set_name(std::string name);
    void set_type(std::string type);
};

#endif