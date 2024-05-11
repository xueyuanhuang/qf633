#include<iostream>

template <typename T>
void swapValue(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
};

int main(){
    int a = 250, b = 666;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    swapValue(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::string c = "hello", d = "web3";
    std::cout << "c = " << c << ", d = " << d << std::endl;

    swapValue(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    return 0;
}