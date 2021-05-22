#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *pony = new Pony("pony from heap");
    std::cout << pony->get_name() << std::endl;
    delete pony;
}

void ponyOnTheStack()
{
    Pony pony("pony from stack");
    std::cout << pony.get_name() << std::endl;
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}
