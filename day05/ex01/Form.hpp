#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
    std::string const name;
    bool signeds;
    int const grade_sign;
    int const grad_exec;

public:
    Form(std::string const name, int const grade_sign, int const grade_exec);
    void BeSigned(Bureaucrat&b);
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
    std::string const  getName() const ;
    ~Form();
};


#endif