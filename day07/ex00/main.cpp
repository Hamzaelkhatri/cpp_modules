#include <iostream>
#include <string>
#include "whatever.hpp"

class Awesome
{

public:
    Awesome(int n) : _n(n) {}

    bool operator==(Awesome const &rhs) { return (this->_n == rhs._n); }
    bool operator!=(Awesome const &rhs) { return (this->_n != rhs._n); }
    bool operator>(Awesome const &rhs) { return (this->_n > rhs._n); }
    bool operator<(Awesome const &rhs) { return (this->_n < rhs._n); }
    bool operator>=(Awesome const &rhs) { return (this->_n >= rhs._n); }
    bool operator<=(Awesome const &rhs) { return (this->_n <= rhs._n); }

private:
    int _n;
};

int main()
{
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    Awesome *aw = new Awesome(10);
    Awesome *bw = new Awesome(20);
    Awesome *r = min(aw, bw);
    min(aw, bw);
    if (r == aw)
        std::cout << "aw\n";
    else
        std::cout << "bw\n";
    Awesome *o = max(aw, bw);
    if (o == aw)
        std::cout << "aw\n";
    else
        std::cout << "bw\n";
    swap(aw, bw);
    if (o == bw && r == aw)
        std::cout << "swap not affected\n";
    else
        std::cout << "swap done\n";
    return 0;
}
