#include <iostream>

char toUpper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    return (c);
}

int main(int ac, char **ag)
{
    int i;
    int j;

    i = 1;
    if (ac > 1)
    {
        while (ag[i])
        {
            j = 0;
            while (ag[i][j])
            {
                std::cout << toUpper(ag[i][j]);
                j++;
            }
            std::cout << " ";
            i++;
        }
        return (0);
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}