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

int  Bureaucrat::getGrade() const
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

void Bureaucrat::signForm(Form *f)
{
    try
    {
        f->BeSigned(*this);
        std::cout << this->name << " sign " << f->getName();
    }
    catch (const std::exception &e)
    {
        std::cerr << this->name << " cannot sign " << f->getName()<< " because " << e.what() << '\n';
    }
}

Bureaucrat::~Bureaucrat()
{
}

/*

        ShrubberyCreationForm.hpp ShrubberyCreationForm.cpp RobotomyRequestForm.hpp RobotomyRequestForm.cpp PresidentialPardonForm.hpp PresidentialPardonForm.cpp

*/