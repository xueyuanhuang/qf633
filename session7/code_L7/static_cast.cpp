#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived class" << std::endl;
    }
    void print_plus(){
        std::cout << "Drived class plus" << std::endl;
    } 
};

int main() {

    //example 1: type safe cast
    if (0) {
        // int num_int = 10;
        double num_double = 10.1;
        // int num_int = static_cast<int>(num_double);
        int num_int = num_double;
        // double num_double = static_cast<double>(num_int); // Convert integer to double
        std::cout << "Converted value: " << num_int << std::endl;
        // std::cout << "Converted value: " << num_double << std::endl;
    }
    
    //example 2: type safe up cast along hierachy of class inheritance
    if (1) {
        Base* base_ptr = new Derived();
        Derived* derived_ptr = static_cast<Derived*>(base_ptr);
        // derived_ptr->print();
        derived_ptr->print_plus();
        delete base_ptr; // Clean up memory
    }
    
    return 0;
}