#ifndef FILE_H
#define FILE_H
#include <iostream>
class file
{
private:
    std::string file1;
    std::string file2;
    std::string search;
    std::string replaceWith;

public:
    file(/* args */);
    file(std::string file1, std::string file2, std::string search, std::string replacewith);
    ~file();
    std::string getFile1();
    void setFile1(std::string file1);
    std::string getFile2();
    void setFile2(std::string file2);
    std::string getSearch();
    void setSearch(std::string search);
    std::string getReplaceWith();
    void setReplaceWith(std::string replaceWith);
    void keep_info();
};

#endif