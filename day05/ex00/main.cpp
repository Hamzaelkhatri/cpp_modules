#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("EX01", 100);
        // Bureaucrat b1("EX02", 150);
        // b1.decrGrade();
        // Bureaucrat b2("EX03", 1);
        // Bureaucrat b3("EX04", 0);
        // Bureaucrat b4("EX05", 121);
        std::cout << b ;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}