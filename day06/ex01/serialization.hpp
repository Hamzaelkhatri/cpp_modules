#ifndef SERIALIZATION_H
#define SERIALIZATION_H
#include <iostream>

typedef struct Data
{
    int i;
    std::string s;
} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif
