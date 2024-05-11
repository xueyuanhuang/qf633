#include <iostream>

unsigned long factorial(int n){
    if (n < 0){
        throw std::runtime_error("there is no factorial for negative number!");
    } else if (n == 0 || n == 1){
        return 1;
    } else{
        return static_cast<unsigned long>(n) * factorial(n-1);
    }
}

int main(){
    int number = -2;
    unsigned long res = factorial(number);
    std::cout << "The factorial of " << number << " is " << res << std::endl;


    return 0;
}