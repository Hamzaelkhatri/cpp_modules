#include <iostream>

void memoryLeak(std::string *panther)
{
    std::cout << *panther << std::endl;
}

int main(void)
{
    std::string *panther = new std::string("String panther");
    memoryLeak(panther);
    delete panther;
    return 0;
}
