#include <iostream>

int multiply(int a, int b = 1, int c = 3)
{
    return a * b * c;
};

int main()
{
    std::cout << multiply(5, 3, 4) << std::endl;
    std::cout << multiply(5, 2) << std::endl;
    std::cout << multiply(5) << std::endl;

    return 0;
}