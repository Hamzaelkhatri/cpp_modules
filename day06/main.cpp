#include "serialization.hpp"
int main()
{
    Data *d = new Data;
    uintptr_t p = serialize(d);
    std::cout << "in serialization --> string : " << d->s << " integer :" << d->i << std::endl;
    Data *m;
    m = deserialize(p);
    std::cout << "in deserialization --> string " << m->s << " integer : " << m->i << std::endl;
    return (0);
}