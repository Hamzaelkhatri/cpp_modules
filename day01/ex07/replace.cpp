#include <iomanip>
#include <iostream>
#include <fstream>
#include "file.hpp"

void savechanges(std::string str,file *f)
{
    std::ofstream out(f->getFile1()+".replace");
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
    try
    {
        fs.open(f->getFile1(), std::ios::in);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    if (!fs.is_open())
    {
        try
        {
            throw file_exception();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        exit(0);
    }
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
        savechanges(str,f);
    else
    {
        std::cout << "keyword not found" << std::endl;
    }
}

int main()
{
    file *f = new file();
    f->keep_info();
    find_keyword(f);
    return 0;
}
