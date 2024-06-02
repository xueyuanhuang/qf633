#include <iostream>

using namespace std;

class A {
public:
    void fun_a() {
        cout << " In class A\n";
    }
};
 
class B {
public:
    void fun_b() {
        cout << " In class B\n";
    }
};

int main() {
    if (0) {
        int number = 951111111;

        // Casting an integer pointer to a pointer to char
        char* char_ptr = reinterpret_cast<char*>(&number);

        // Outputting the individual bytes of the integer
        for (size_t i = 0; i < sizeof(int); ++i) {
            // std::cout << "Byte " << i + 1 << ": " << (*(char_ptr + i)) << std::endl;
            std::cout << "Byte " << i + 1 << ": " << static_cast<int>(*(char_ptr + i)) << std::endl;
        }

    }

    if (1) {
        // creating object of class B
        B* x = new B();
        x->fun_b();
 
        // converting the pointer to object
        // referenced of class B to class A
        A* new_a = reinterpret_cast<A*>(x);
    
        // accessing the function of class A
        new_a->fun_a();

        delete x;

    }


    return 0;
}