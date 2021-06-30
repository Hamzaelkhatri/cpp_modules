#include "Scalar.hpp"

int main(int ac, char **ag)
{

    if (ac != 2)
    {
        std::cerr << "Arguement 2 not found" << std::endl;
        return (1);
    }
    try
    {
        Scalar s(ag[1]);
        s.execute();
    }
    catch (const std::exception &e)
    {
        std::cerr << "not execute because of : " << e.what() << '\n';
    }

    return (0);
}