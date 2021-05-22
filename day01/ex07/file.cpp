#include "file.hpp"
file::file()
{
    this->file1 = "";
    this->replaceWith = "";
    this->search = "";
}

file::file(std::string file1, std::string search, std::string replacewith)
{
    this->file1 = file1;
    this->replaceWith = replacewith;
    this->search = search;
}

file::~file()
{
}

void file::setFile1(std::string file1)
{
    this->file1 = file1;
}

std::string file::getFile1()
{
    return this->file1;
}

std::string file::getSearch()
{
    return this->search;
}

void file::setSearch(std::string search)
{
    this->search = search;
}

std::string file::getReplaceWith()
{
    return this->replaceWith;
}

void file::setReplaceWith(std::string replaceWith)
{
    this->replaceWith = replaceWith;
}

void file::keep_info()
{
    int check = 0;
    while (1)
    {
        if (!check)
        {
            std::cout << "ENTER THE FIRST FILENAME" << std::endl;
            getline(std::cin, this->file1);
            if (getFile1().empty())
            {
                std::cout << "\e[0;31mEmpty file not acceptable\e[0;37m" << std::endl;
                continue;
            }
            else
                check = 1;
        }
         if (check == 1)
        {
            std::cout << "ENTER ORIGINAL KEYWORD" << std::endl;
            getline(std::cin, this->search);
            if (getSearch().empty() && check == 1)
            {
                std::cout << "\e[0;31mEmpty keyword not acceptable\e[0;37m" << std::endl;
                continue;
            }
            else
            {
                check = 2;
            }
        }
        std::cout << "ENTER REPLACE WITH :" << std::endl;
        getline(std::cin, this->replaceWith);
        if (getReplaceWith().empty())
        {
            std::cout << "\e[0;31mEmpty keyword not acceptable\e[0;37m" << std::endl;
            continue;
        }
        break;
    }
}