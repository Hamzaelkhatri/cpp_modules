#include "Bureaucrat.hpp"

void Bureaucrat::decrGrade()
{
    int newnGrade = 1 + grade;
    if (newnGrade > 150)
        throw GradeTooLowException();
    else
        grade = newnGrade;
}

void Bureaucrat::incrGrade()
{
    int newnGrade = grade - 1;
    if (newnGrade < 1)
        throw GradeTooHighException();
    else
        grade = newnGrade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}

std::string const Bureaucrat::getName() const
{
    return (name);
}

int const Bureaucrat::getGrade() const
{
    return (grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur)
{
    out << bur.getName() << " bureaucrat grade " << bur.getGrade() << std::endl;
    return (out);
}

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
    if (this->grade < 1)
        throw GradeTooHighException();
    else if (this->grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}
