#include <iostream>

int add(int a, int b){
    return a + b;
}

int substract(int a, int b){
    return a - b;
}

typedef int (*BinaryOperation)(int , int);

int performOperation(int a, int b, BinaryOperation okx){
    return (*okx)(a, b);
}

int main(){
    BinaryOperation addPtr = add;
    BinaryOperation substractPtr = substract;

    std::cout << "addidtion: " << performOperation(2,3, add) << std::endl; 
    std::cout << "substract: " << performOperation(3,2, substract) << std::endl;

    return 0;
}