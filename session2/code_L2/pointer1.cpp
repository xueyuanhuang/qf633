#include <iostream>

using namespace std;

int main(){
    int number = 666;

    int *pointerToNumber = &number;

    cout << "Value of the number: " << number << endl;
    cout << "memory address of the number: " << &number << endl;
    cout << "address of the number (pointerToNumber): " << pointerToNumber << endl;
    cout << "through pointer to access value (*pointerToNumber): " << *pointerToNumber << endl;

    if (true)
    {
        cout << "without endl";
    }
    
    if (1){
        cout << endl << "if with 1 as condition" << endl;
    }

    if (0){
        cout << endl << "if with 1 as condition" << endl;
    }

    return 0;
}