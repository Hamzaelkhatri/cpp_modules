#include "file.hpp"
file::file()
{
    this->file1 = "";
    this->file2 = "";
    this->replaceWith = "";
    this->search = "";
}

file::file(std::string file1, std::string file2, std::string search, std::string replacewith)
{
    this->file1 = file1;
    this->file2 = file2;
    this->replaceWith = replacewith;
    this->search = search;
}

file::~file()
{
}

std::string file::getFile1()
{
    return this->file1;
}

void file::setFile1(std::string file1)
{
    this->file1 = file1;
}

std::string file::getFile2()
{
    return this->file2;
}

void file::setFile2(std::string file2)
{
    this->file2 = file2;
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
    std::cout << "ENTER THE FIRST FILENAME" << std::endl;
    getline(std::cin, this->file1);
    std::cout << "ENTER ORIGINAL KEYWORD" << std::endl;
    getline(std::cin, this->search);
    std::cout << "ENTER REPLACE WITH :" << std::endl;
    getline(std::cin, this->replaceWith);
}