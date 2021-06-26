#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;

public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(std::string &target);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const &executor);
};

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    std::ofstream MyFile(this->target + "_shrubbery");

    // Write to the file
    // MyFile << "Files can be tricky, but it is fun enough!";

    // Close the file
    MyFile.close();
}

/*
               _-_
    /~~   ~~\
 /~~         ~~\
{               }
 \  _-     -_  /
   ~  \\ //  ~
_- -   | | _- _
  _ -  | |   -_
      // \\
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form("shrubbery", 145, 135), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
