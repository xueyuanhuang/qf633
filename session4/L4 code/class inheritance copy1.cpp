#include <iostream>

class Animal{
public:
    void eat(){
        std::cout << "Animal is eating" << std::endl;
    }
};

class Dog:public Animal{
public:
    void bark(){
        std::cout << "Dog is barking" << std::endl;
    }
};

int main(){
    Dog doge;
    doge.eat();
    doge.bark();

    return 0;
}

