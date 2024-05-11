#include <iostream>

int add(int a, int b)
{
    return a + b;
};

int add(int a, int b, int c)
{
    return a + b + c;
}

std::string add(std::string str1, std::string str2)
{
    return str1 + str2;
}

int main()
{
    int sum1 = add(2, 3);
    std::cout << "sum of two integers: " << sum1 << std::endl;

    int sum2 = add(2, 3, 4);
    std::cout << "sum of three integers: " << sum2 << std::endl;

    std::string str = add("hello", "duck");
    std::cout << "concatenated string: " << str << std::endl;

    return 0;
}