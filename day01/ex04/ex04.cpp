#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *s = &str;
    std::string &st = str;
    std::cout << *s << std::endl;
    std::cout << st << std::endl;
    return 0;
}
