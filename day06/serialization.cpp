#include "serialization.hpp"

uintptr_t serialize(Data *ptr)
{
    srand(time(0));
    std::string str = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned int i = 1;
    ptr->s = "";
    while (i < (str.length() / 10))
    {
        ptr->s += str[rand() % str.length()];
        i++;
    }
    ptr->i = rand() % 10000;
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}