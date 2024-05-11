#include <iostream>

class Base{
public:
    int publicVar;
    void publicMethod(){
        std::cout << "Public method in Base class" << std::endl;
    }
private:
    int privateVar;
    void privateMethod(){
        std::cout << "Private method in Base class" << std::endl;
    }
protected:
    int protectedVar;
    void protectedMethod(){
        std::cout << "Protected method in Base class" << std::endl;
    }
};

class Derived:public Base{
public:
    void accessBaseMembers(){
        publicVar = 10;
        publicMethod();

        protectedVar = 10;
        protectedMethod();

        // privateVar = 20;
        // privateMethod();
    } 
};

int main(){
    Base b;
    b.publicVar = 10;
    b.publicMethod();

    Derived d;
    d.accessBaseMembers();

    return 0;
}