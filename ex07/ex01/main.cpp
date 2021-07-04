#include "iter.hpp"

int main()
{
    int i[] = {1, 3, 5, 2, 4};
    char c[] = {'a', 'b', 'c', 'd'};
    std::string s[] = {"hello", "hi", "foo", "here"};

    iter(i, 5, print);
    iter(c, 4, print);
    iter(s, 4, print);

    return (0);
}