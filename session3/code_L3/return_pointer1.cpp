#include <iostream>

int* createInteger(){
    int* ptr = new int;
    *ptr = 250;
    return ptr;
};

int main(){
    int* myIntegerPtr = createInteger();

    std::cout << "Value: " << *myIntegerPtr << std::endl;

    delete myIntegerPtr;


    return 0;
}