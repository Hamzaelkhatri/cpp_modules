#include "Form.hpp"

Form::Form() :  grade_sign(0) , grad_exec(0)
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

std::ostream &operator<<(std::ostream &out, Form const &f)
{
    (void) f;
    return out;
}

Form &Form::operator=(Form const &form)
{
    signeds = form.signeds;
    if (grade_sign < 1 || grad_exec < 1)
        throw GradeTooHighException();
    if (grad_exec > 150 || grade_sign > 150)
        throw GradeTooLowException();
    return *this;
}

Form::Form(const Form &f) : name(f.name) , grade_sign(f.grade_sign) , grad_exec(f.grad_exec)
{
    signeds = f.signeds;
    *this = f;
}

Form::Form(std::string const name, int const grade_sign, int const grade_exec) : name(name), grade_sign(grade_sign), grad_exec(grade_exec)
{
    signeds = false;
    if (grade_sign < 1 || grad_exec < 1)
        throw GradeTooHighException();
    if (grad_exec > 150 || grade_sign > 150)
        throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Exception:Grade Too Hight ";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Exception:Grade Too Low ";
}

const char *Form::UnsignedFormException::what() const throw()
{
    return "UnsignedFormException: Grade not accepted";
}

Form::~Form()
{
}

void Form::execute(Bureaucrat const &b) const
{
    if (b.getGrade() <= this->grad_exec)
    {
        action();
    }
    else
        throw UnsignedFormException();
}
