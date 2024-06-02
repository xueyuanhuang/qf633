#include <iostream>
using namespace std;


class Base {
public:
    virtual void print() {
        std::cout << "Base class" << std::endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
	//pointer down casting
	if (0) {
		Base* base_ptr = new Derived();
		// Attempting to downcast the base pointer to a derived pointer
		Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);

		if (derived_ptr) {
			// Downcast succeeded, safely use the derived pointer
			derived_ptr->print();
		} else {
			// Downcast failed, handle the situation accordingly
			std::cout << "Dynamic cast failed!" << std::endl;
		}

		delete base_ptr; // Clean up memory

	}
	
	//refernce down casting
	if (1) {
		Base* base_ptr = new Derived();

		// Attempting to downcast the base pointer to a derived pointer
		try {
      		Derived& derived_ref = dynamic_cast<Derived&>(*base_ptr);
   		}
   		catch(std::bad_cast exp) {
    		std::cout<<"Caught bad cast\n";
    	}
		delete base_ptr; // Clean up memory
	}





    return 0;
}