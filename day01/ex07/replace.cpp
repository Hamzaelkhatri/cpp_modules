#include <iomanip>
#include <iostream>
#include <fstream>
#include "file.hpp"

void savechanges(std::string str)
{
    std::string input;
    std::ofstream out("FILENAME.replace");
    out << str;
    out.close();
}

void find_keyword(file *f)
{
    int i = 0;
    std::fstream fs;
    std::string tmp;
    std::string str;
    str = "";
    fs.open(f->getFile1(), std::ios::in);
    while (!fs.eof())
    {
        std::getline(fs, tmp);
        while (tmp.find(f->getSearch()) != std::string::npos)
        {
            tmp.replace(tmp.find(f->getSearch()), f->getSearch().length(), f->getReplaceWith());
            i++;
        }
        str += tmp;
        str += "\n";
    }
    fs.close();
    if (i)
        savechanges(str);
    else
    {
        std::cout << "keyword not found" << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    file *f = new file();
    f->keep_info();
    find_keyword(f);
    return 0;
}
