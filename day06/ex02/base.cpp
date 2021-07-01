#include "base.hpp"

Base::~Base()
{
}

Base *Base::generate(void)
{
    srand(time(0));
    Base *tab[3] = {new A(), new B(), new C()};
    int i = rand() % 3;
    for (int j = 0; j < 3; j++)
    {
        if (i != j)
            delete tab[j];
    }
    return (tab[i]);
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "C\n";
}

void identify(Base &p)
{
    A &a = dynamic_cast<A &>(p);
}
