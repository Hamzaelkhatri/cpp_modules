#include <iostream>
#include "phone_book.hpp"

int main(int ac, char **ag)
{
    std::string str;
    phone_book *phone = new phone_book[8];

    do
    {
        getline(std::cin, str);
        if (str == "ADD")
        {
            phone->add_contact(phone, 0);
        }
        else if (str == "SEARCH")
        {
        }
        else if (str != "" && str != "EXIT")
        {
            std::cout << "arguments not found" << std::endl;
        }
    } while (str != "EXIT");
    return (0);
}