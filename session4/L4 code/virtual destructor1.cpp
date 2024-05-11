#include <iostream>

class Base{
public:
    Base(){
        std::cout << "Base class constructor" << std::endl;
    }
    virtual ~Base(){
        std::cout << "Base class deconstructor" << std::endl;
    }
};

class Derived:public Base{
public:
    Derived(){
        std::cout << "Derived constructor" << std::endl;
    }
    ~Derived(){
        std::cout << "Derived deconstructor" << std::endl;
    }
};

int main(){
    Derived* d = new Derived();
    delete d;

    Base* b = new Derived();
    delete b;


    return 0;
}
