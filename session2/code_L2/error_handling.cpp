#include <iostream>

// Function that throws an exception
void divideNumbers(int numerator, int denominator)
{
    if (denominator == 0)
    {
        // Throw an exception if the denominator is zero
        throw std::runtime_error("Error: Division by zero");
    }

    // Perform the division if the denominator is not zero
    int result = numerator / denominator;
    std::cout << "Result of division: " << result << std::endl;
}

void print_a(int x)
{

    std::cout << &x << std::endl;
    std::cout << x << std::endl;
}

void print_a2(int &x)
{
    std::cout << &x << std::endl;
    std::cout << x << std::endl;
}

int main()
{
    try
    {
        // Call a function that may throw an exception
        divideNumbers(10, 2);

        int a = 10;
        std::cout<<&a<<std::endl;
        print_a(a);
        a = 20;
        print_a2(a);
        std::cout<<&a<<std::endl;

        int C = 1;
        std::cout << bool(1 == C++) << std::endl;
        

        // Uncomment the line below to test the exception case
        divideNumbers(5, 0);
    }
    catch (const std::exception &e)
    {
        // Catch the exception and handle it
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}