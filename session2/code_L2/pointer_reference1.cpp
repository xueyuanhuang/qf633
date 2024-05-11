#include <iostream>

using namespace std;

int main(){
    int number = 666;
    int& referenceToNumber = number;

    cout << "number: " << number << endl;
    cout << "referenceToNumber: " << referenceToNumber << endl;

    referenceToNumber = 38;
    cout << "Modified referenceToNumber: " << referenceToNumber << endl;
    cout << "how about number after reference being modified? :" << number << endl;

    int arr[] = {1,23,324,234,2343};
    int *ptr = arr;
    cout << "value at position:" << *ptr << endl;

    ptr += 2;
    cout << "value at incremented position: " << *ptr << endl;

    cout << "value at fourth position without changing ptr: " << *(ptr+1) << endl;

    cout << "value of arr variable: " << arr << endl;

    int *ptr2 = arr + 2;
    if (ptr2 == ptr){
        cout << "tow pointer are equal" << endl;
    }else{
        cout << "two pointers are different" << endl;
    }

    return 0;
}