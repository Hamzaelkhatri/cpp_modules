#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>

class Bureaucrat
{
private:
    std::string const name;
    int grade;

    Bureaucrat();

public:
    Bureaucrat(std::string const &name, int grade);
    virtual ~Bureaucrat();
    int const getGrade() const;
    std::string const getName() const;
    void incrGrade();
    void decrGrade();
    Bureaucrat &operator=(Bureaucrat const &other);

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &chara);

#endif