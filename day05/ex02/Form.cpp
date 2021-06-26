#include "Form.hpp"

void Form::execute(Bureaucrat const &executor) const
{
}

std::string const Form::getName() const
{
    return (this->name);
}

void Form::BeSigned(Bureaucrat &b)
{
    if (grade_sign < b.getGrade())
        throw GradeTooLowException();
    signeds = true;
}

std::ostream &operator<<(std::ostream &out, Form const &f);

std::ostream &operator<<(std::ostream &out, Form const &f)
{
    return out;
}

Form::Form(std::string const name, int const grade_sign, int const grade_exec) : name(name), grade_sign(grade_sign), grad_exec(grade_exec), signeds(false)
{
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too Hight Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

Form::~Form()
{
}
