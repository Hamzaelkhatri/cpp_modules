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
    Bureaucrat &operator=(Bureaucrat const &other);
    Bureaucrat(Bureaucrat &b);
    int getGrade() const;
    std::string const getName() const;
    void incrGrade();
    void decrGrade();
    virtual ~Bureaucrat();

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