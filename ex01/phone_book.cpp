#include <iostream>
#include "phone_book.hpp"

std::string m_substr(std::string str)
{
    std::string s = str;
    if (str.length() >= 10)
    {
        s= str.substr(0,9);
        // s+=".";
    }
    return (s);
}

void add(phone_book *list, phone_book nv, int i)
{
    if (i < 8)
        list[i] = nv;
    else
        std::cout << "max contact to add is 8" << std::endl;
}

std::string phone_book::strings()
{
    return (std::to_string(index) + "|" + m_substr(first_name) + "|" + m_substr(last_name) + "|" + m_substr(nickname));
}

std::string phone_book::details()
{
    return ("index : " + std::to_string(index) + "\n first name : " + first_name + "\n last name :" + last_name + "\n nickname : " + nickname + "\n login : " + login + "\n adrs_postal :" + adrs_postal + "\n email addresses : " + email_adrs + "\n phone numbers :" + num_phone + "\ndns : " + dns + "\n favorite_meal :" + favorite_meal + "\n underwear_color : " + underwear_color + "\n darkest_secret : " + darkest_secret);
}

void show_contact(phone_book *list, int i)
{
    int j;

    j = 0;
    while (j < i)
    {
        std::cout << list[j].strings() << std::endl;
        j++;
    }
}

void phone_book::add_contact(phone_book *list, int i)
{
    phone_book nv;
    std::cout << " enter first name : ";
    getline(std::cin, nv.first_name);
    std::cout << " enter last name : ";
    getline(std::cin, nv.last_name);
    std::cout << " enter nickname : ";
    getline(std::cin, nv.nickname);
    std::cout << " enter login : ";
    getline(std::cin, nv.login);
    std::cout << " enter address postal : ";
    getline(std::cin, nv.adrs_postal);
    std::cout << " enter email : ";
    getline(std::cin, nv.email_adrs);
    std::cout << " enter date birthday : ";
    getline(std::cin, nv.dns);
    std::cout << " enter favorite meal : ";
    getline(std::cin, nv.first_name);
    std::cout << " enter underwear color : ";
    getline(std::cin, nv.underwear_color);
    std::cout << " enter darkest secret : ";
    getline(std::cin, nv.darkest_secret);
    add(list, nv, i);
}

int main(int ac, char **ag)
{
    std::string str;
    int i = 0;
    phone_book *phone = new phone_book[8];

    do
    {
        getline(std::cin, str);
        if (str == "ADD")
        {
            phone->add_contact(phone, i);
            i++;
        }
        else if (str == "SEARCH")
        {
            show_contact(phone, i);
        }
        else if (str != "" && str != "EXIT")
        {
            std::cout << "arguments not found" << std::endl;
        }
    } while (str != "EXIT");
    return (0);
}