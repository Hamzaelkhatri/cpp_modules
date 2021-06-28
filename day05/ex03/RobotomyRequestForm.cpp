#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
    : Form(_target, 72, 45), target(_target)
{
    srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src), target(src.target)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if (&src != this)
        this->target = src.target;
    return *this;
}

const char *RobotomyRequestForm::RobotomizedFailed::what() const throw()
{
    return ("Exception : robotomized failure");
}

std::string RobotomyRequestForm::gettarget()
{
    return target;
}

void RobotomyRequestForm::action() const
{
    int r = 0;
    r = rand() % 2;
    if (r == 0)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        throw RobotomizedFailed();
}
