#include <iostream>

using namespace std;

int main(){
    if(1){
        int number;

        cout << "Enter a integer:";
        cin >> number;

        if (number%2 == 0){
            cout << number << " is an even number" << endl;
        }else{
            cout << number << " is a odd number" << endl;
        }
    }

    return 0;
}