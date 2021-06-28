#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        RobotomyRequestForm r("R1");
        Bureaucrat b("B1", 2);
        Form *f = new ShrubberyCreationForm("F1");
        f->action();
        r.action();
        Form *pres = new PresidentialPardonForm("F2");
        pres->action();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
