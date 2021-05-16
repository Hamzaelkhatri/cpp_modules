#include <iostream>

class phone_book
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string adrs_postal;
    std::string email_adrs;
    std::string num_phone;
    std::string dns;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
    int index;

    void add(phone_book *list, phone_book nv, int i)
    {
        if (i < 8)
            list[i] = nv;
        else
            std::cout << "max contact to add is 8" << std::endl;
    }

    std::string strings()
    {
        return ("index : " + std::to_string(index) + " \nfirst name : " + first_name + "\n last name :" + last_name + "\n nickname : " + nickname + "\n login : " + login + "\n adrs_postal :" + adrs_postal + "\n email addresses : " + email_adrs + "\n phone numbers :" + num_phone + "\ndns : " + dns + "\n favorite_meal :" + favorite_meal + "\n underwear_color : " + underwear_color + "\n darkest_secret : " + darkest_secret);
    }

public:
    phone_book(std::string first_name,
               std::string last_name,
               std::string nickname,
               std::string login,
               std::string adrs_postal,
               std::string email_adrs,
               std::string num_phone,
               std::string dns,
               std::string favorite_meal,
               std::string underwear_color,
               std::string darkest_secret,
               int index);
    ~phone_book();
    phone_book();

    void set_firstName(std::string fn)
    {
        first_name = fn;
    }

    std::string get_firstName()
    {
        return (first_name);
    }

    void set_lastName(std::string last_name)
    {
        this->last_name = last_name;
    }

    std::string get_lastName()
    {
        return (last_name);
    }

    void set_nickname(std::string nickname)
    {
        this->nickname = nickname;
    }

    std::string get_nickname()
    {
        return (nickname);
    }

    void set_login(std::string login)
    {
        this->login = login;
    }

    std::string get_login()
    {
        return (login);
    }

    void set_adsPostal(std::string adsPostal)
    {
        this->adrs_postal = adsPostal;
    }

    std::string get_adsPostal()
    {
        return (adrs_postal);
    }

    void set_email(std::string email)
    {
        email_adrs = email;
    }

    std::string get_email()
    {
        return (email_adrs);
    }

    void set_phone(std::string phone)
    {
        num_phone = phone;
    }

    std::string get_phone()
    {
        return (num_phone);
    }

    void set_dns(std::string dns)
    {
        this->dns = dns;
    }

    std::string get_dns()
    {
        return (dns);
    }

    void set_favMeal(std::string favMeal)
    {
        favorite_meal = favMeal;
    }

    std::string get_favMeal()
    {
        return (favorite_meal);
    }

    void set_underwear(std::string underwear)
    {
        underwear_color = underwear;
    }

    std::string get_underwear()
    {
        return (underwear_color);
    }

    void set_secret(std::string secret)
    {
        darkest_secret = secret;
    }

    std::string get_secret()
    {
        return (darkest_secret);
    }

    void set_index(int index)
    {
        this->index = index;
    }

    int set_index()
    {
        return (index);
    }

    void add_contact(phone_book *list, int i)
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
};

phone_book::phone_book(std::string first_name,
                       std::string last_name,
                       std::string nickname,
                       std::string login,
                       std::string adrs_postal,
                       std::string email_adrs,
                       std::string num_phone,
                       std::string dns,
                       std::string favorite_meal,
                       std::string underwear_color,
                       std::string darkest_secret,
                       int index)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->login = login;
    this->adrs_postal = adrs_postal;
    this->email_adrs = email_adrs;
    this->num_phone = num_phone;
    this->dns = dns;
    this->favorite_meal = favorite_meal;
    this->underwear_color = underwear_color;
    this->darkest_secret = darkest_secret;
    this->index = index;
}

phone_book::phone_book()
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->login = "";
    this->adrs_postal = "";
    this->email_adrs = "";
    this->num_phone = "";
    this->dns = "";
    this->favorite_meal = "";
    this->underwear_color = "";
    this->darkest_secret = "";
    this->index = 0;
}

phone_book::~phone_book()
{
}
