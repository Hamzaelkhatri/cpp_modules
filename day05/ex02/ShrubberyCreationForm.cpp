#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::action() const
{
    std::ofstream MyFile(this->target + "_shrubbery");
    MyFile << "      /\\      \n";
    MyFile << "     /\\*\\     \n";
    MyFile << "    /\\O\\*\\    \n";
    MyFile << "   /*/\\/\\/\\   \n";
    MyFile << "  /\\O\\/\\*\\/\\  \n";
    MyFile << " /\\*\\/\\*\\/\\/\\ \n";
    MyFile << "/\\O\\/\\/*/\\/O/\\ \n";
    MyFile << "      ||         \n";
    MyFile << "      ||         \n";
    MyFile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &f) : Form(f), target(f.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &f)
{
    if (&f != this)
        this->target = f.target;
    return *this;
}