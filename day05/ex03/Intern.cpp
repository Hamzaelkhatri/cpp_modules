#include "Intern.hpp"

typedef Form *(*typede)(std::string types);
Intern &Intern::operator=(Intern const &src)
{
    (void)src;
    return (*this);
}

Intern::Intern(Intern const &src)
{
    *this = src;
    return;
}

Form *getShru(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *getPres(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *getRobo(std::string target)
{
    return (new RobotomyRequestForm(target));
}

const char *Intern::UnkownTypeException::what() const throw()
{
    return ("requested form not Known");
}

Form *Intern::makeForm(std::string name, std::string target)
{
    typede t[3] = {getRobo, getPres, getShru};
    Form *f;
    std::string n[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int i = 0;
    while (i < 3)
    {
        if (n[i] == name)
        {
            f = t[i](target);
            std::cout << "Intern creates " << f->getName() << std::endl;
            return (f);
        }
        i++;
    }
    throw UnkownTypeException();
    return (nullptr);
}

Intern::~Intern()
{
}

Intern::Intern()
{
}