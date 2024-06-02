#include <iostream>

int *fun()
{
    int a = 111;
    return &a;
}

int main()
{
    if (0)
    {
        int *ptr = new int;
        {
            int a = 10;
            ptr = &a;
        }
        std::cout << *ptr << std::endl;
        // delete ptr;
    }

    if (1)
    {
        int *p = fun();
        fflush(stdin);
        std::cout << *p << std::endl;
        printf("%d", *p);
    }

    return 0;
}