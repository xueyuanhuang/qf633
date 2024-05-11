#include <iostream>

int main(){
    int* arr = new int[5];
    for(int i = 0; i < 5; i++){
        arr[i] = i*2;
    }

    delete[] arr;

    return 0;
}