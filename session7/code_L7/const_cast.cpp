#include <iostream>

class MyClass {
private:
    int value;
public:
    MyClass(int v) : value(v) {}

    // Getter method
    int getValue() const {
        return value;
    }

    // Setter method
    void setValue(int v) {
        value = v;
    }
};

int main() {

	// Creating a const object
    const MyClass const_obj(10);
	MyClass obj(15); 

    // Attempting to modify the const object directly will result in a compilation error
    // const_obj.setValue(20); // Error: member function 'setValue' is declared const
	obj.setValue(20);
    
    // Using const_cast to remove constness and modify the object
    MyClass& nonConstObj = const_cast<MyClass&>(const_obj);
    nonConstObj.setValue(30); // Valid

	// using const_cast to remove the volatile attribute and disallow to change the object
	const MyClass& constObj = const_cast<const MyClass&>(obj);
	// constObj.setValue(10);
    
    std::cout << "Value after modification: " << nonConstObj.getValue() << std::endl; // Output: 20
    std::cout << "Value after modification: " << constObj.getValue() << std::endl; // Output: 20
    
    return 0;
}