#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();
    void action() const;
};

#endif
