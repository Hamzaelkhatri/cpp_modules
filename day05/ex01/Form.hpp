#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
private:
    std::string const name;
    bool signed = false;
    int const  grade_sign;
    int const grad_exec;

public:
    Form(/* args */);
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
    ~Form();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &chara);

Form::Form(/* args */)
{
}

Form::~Form()
{
}

#endif