
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
    : Form("PresidentialPardonForm", 25, 5), target(_target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
    : Form(src), target(src.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    this->target = src.target;
    return *this;
}

void PresidentialPardonForm::action() const
{
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}