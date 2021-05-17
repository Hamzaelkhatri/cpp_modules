#include <iostream>
#include "phone_book.hpp"

std::string m_substr(std::string str)
{
    std::string s = str;
    if (str.length() >= 10)
    {
        s = str.substr(0, 9);
        s += ".";
    }
    return (s);
}

void add(phone_book *list, phone_book nv, int i)
{
    if (i < 8)
    {
        nv.set_index(i);
        list[i] = nv;
    }
    else
        std::cout << "max contact to add is 8" << std::endl;
}

std::string phone_book::strings()
{
    return (std::to_string(index) + "|" + m_substr(get_firstName()) + "|" + m_substr(get_lastName()) + "|" + m_substr(get_nickname()));
}

std::string phone_book::details()
{
    return ("index : " + std::to_string(index) + "\n first name : " + get_firstName() +
            "\n last name :" + get_lastName() + "\n nickname : " + get_nickname() +
            "\n login : " + get_login() + "\n adrs_postal :" + get_adsPostal() +
            "\n email addresses : " + get_email() + "\n phone numbers :" +
            get_phone() + "\ndns : " + get_dns() + "\n favorite_meal :" +
            get_favMeal() + "\n underwear_color : " + get_underwear() +
            "\n darkest_secret : " + get_secret());
}

void show_detaills(phone_book *list, std::string str, int index)
{
    int i;

    i = 0;
    if (str[0] >= '0' && str[0] < '9')
        i = std::stoi(str);
    while (1)
    {
        if (i <= index)
        {
            std::cout << list[i].details() << std::endl;
            break;
        }
        else
        {
            std::cout << "index not found" << std::endl;
            continue;
        }
    }
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
    getline(std::cin, nv.favorite_meal);
    std::cout << " enter underwear color : ";
    getline(std::cin, nv.underwear_color);
    std::cout << " enter darkest secret : ";
    getline(std::cin, nv.darkest_secret);
    add(list, nv, i);
}

int main(void)
{
    phone_book *phone = new phone_book[8];
    std::string str;
    std::string index;
    int i = 0;
    do
    {
        getline(std::cin, str);
        if (str == "ADD")
        {
            if (i < 8)
            {
                phone->add_contact(phone, i);
                i++;
            }
            else
            {
                std::cout << "max contact to add is 8" << std::endl;
            }
        }
        else if (str == "SEARCH")
        {
            show_contact(phone, i);
            getline(std::cin, index);
            show_detaills(phone, index, i);
        }
        else if (str != "" && str != "EXIT")
        {
            std::cout << "arguments not found" << std::endl;
        }
    } while (str != "EXIT");
    delete[] phone;
    return (0);
}