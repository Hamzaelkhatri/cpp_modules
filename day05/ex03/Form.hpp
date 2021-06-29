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
    Form();
    Form(std::string const name, int const grade_sign, int const grade_exec);
    Form(const Form &f);
    Form &operator=(const Form &form);
    void BeSigned(Bureaucrat &b);
    virtual ~Form();

    class UnsignedFormException : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
    std::string const getName() const;
    virtual void action() const = 0;
    void execute(Bureaucrat const &b) const;
};
std::ostream &operator<<(std::ostream &out, Form const &f);

#endif