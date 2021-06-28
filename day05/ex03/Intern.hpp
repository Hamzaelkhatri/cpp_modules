#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Intern(Intern const &src);
    class UnkownTypeException : public std::exception
    {
        const char *what() const throw();
    }; Intern &operator=(Intern const &src);
    Form *makeForm(std::string name, std::string target);
};
#endif