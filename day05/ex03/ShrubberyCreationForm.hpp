#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;

public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &f);
    ShrubberyCreationForm &
    operator=(ShrubberyCreationForm const &f);
    void action() const;
};

#endif