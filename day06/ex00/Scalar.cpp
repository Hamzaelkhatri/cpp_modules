#include "Scalar.hpp"

void Scalar::execute()
{
    std::string s = this->input;
    if (s.length() == 1 && !std::isdigit(s[0]))
    {
        this->_charValue = s[0];
        this->_IntValue = static_cast<int>(this->_charValue);
        this->_floatValue = static_cast<float>(this->_charValue);
        this->_DoubleValue = static_cast<double>(this->_charValue);
    }
    else if (check_int(s))
    {
        this->_IntValue = std::stoi(s);
        this->_charValue = static_cast<char>(this->_IntValue);
        this->_floatValue = static_cast<float>(this->_IntValue);
        this->_DoubleValue = static_cast<double>(this->_IntValue);
    }
    else if (check_float(s) || is_floatPseudo())
    {
        this->_floatValue = std::stof(s);
        this->_charValue = static_cast<char>(this->_floatValue);
        this->_IntValue = static_cast<int>(this->_floatValue);
        this->_DoubleValue = static_cast<double>(this->_floatValue);
    }
    else if (check_double(s) || is_DoublePseudo())
    {
        this->_DoubleValue = std::stod(s);
        this->_charValue = static_cast<char>(this->_DoubleValue);
        this->_IntValue = static_cast<int>(this->_DoubleValue);
        this->_floatValue = static_cast<float>(this->_DoubleValue);
    }
    else
    {
        std::cout << "char : impossible \n int : impossible \n float : impossible \n double : impossible\n";
        return;
    }
    print_char();
    print_int();
    print_float();
    print_double();
}

bool Scalar::is_floatPseudo()
{
    std::string _pseudo[] = {"-inff", "+inff", "inff", "nanf"};
    int i = 0;
    while (i < (int)_pseudo->length())
    {
        if (_pseudo[i] == this->input)
            return (true);
        i++;
    }
    return (false);
}

bool Scalar::is_DoublePseudo()
{
    std::string _pseudo[] = {"nan", "inf", "-inf", "+inf"};
    int i = 0;
    while (i < (int)_pseudo->length())
    {
        if (_pseudo[i] == this->input)
            return (true);
        i++;
    }
    return (false);
}

void Scalar::print_int()
{
    std::cout << "int : ";
    if (std::numeric_limits<int>::max() < this->_IntValue || this->_IntValue < std::numeric_limits<int>::min() || is_floatPseudo() || is_DoublePseudo())
        std::cout << "impossible" << std::endl;
    else
        std::cout << this->_IntValue << std::endl;
}

void Scalar::print_char()
{
    std::cout << "char : ";
    if (!std::isprint(this->_charValue) && isascii(this->_charValue) && !is_floatPseudo() && !is_DoublePseudo() && this->_IntValue >= 0 && this->_IntValue < 127)
        std::cout << "Non displayable" << std::endl;
    else if (this->_IntValue < 0 || this->_IntValue > 127)
        std::cout << "impossible" << std::endl;
    else if (std::isprint(this->_charValue))
        std::cout
            << "'" << this->_charValue << "'" << std::endl;
}

void Scalar::print_double()
{
    std::cout << std::fixed << "double : " << this->_DoubleValue << std::endl;
}

void Scalar::print_float()
{
    std::stringstream s;
    if (this->is_DoublePseudo())
        s << this->input << "f";
    else if (this->is_floatPseudo())
        s << this->input;
    else
        s << std::fixed << this->_floatValue << "f";
    std::cout << "float : " << s.str() << "" << std::endl;
}

int Scalar::check_double(std::string str)
{
    int i = 0;
    int num_simi = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length())
    {
        if (str[i] == '.')
        {
            num_simi++;
            i++;
            continue;
        }
        else if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    if (num_simi > 1)
        return (0);
    return (1);
}

int Scalar::check_float(std::string str)
{
    int i = 0;
    int num_simi = 0;
    if (str[str.length() - 1] != 'f')
        return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length() - 1)
    {
        if (str[i] == '.')
        {
            num_simi++;
            i++;
            continue;
        }
        else if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    if (num_simi > 1)
        return (0);
    return (1);
}

int Scalar::check_int(std::string str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length())
    {
        if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

Scalar::Scalar(Scalar &src)
{
    if (this != &src)
        this->input = src.input;
}

Scalar &Scalar::operator=(Scalar &src)
{
    if (this != &src)
    {
        this->input = src.input;
        this->_DoubleValue = src._DoubleValue;
        this->_floatValue = src._floatValue;
        this->_IntValue = src._IntValue;
        this->_charValue = src._charValue;
    }
    return (*this);
}

const char *Scalar::EmptyStringException::what() const throw()
{
    return ("argument empty");
}

Scalar::Scalar(std::string input) : input(input)
{
    if (input.empty())
        throw EmptyStringException();
}

Scalar::~Scalar()
{
}
