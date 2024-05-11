#include <iostream>

void stackExample(){
    int s = 5;
}

void heapExample(){
    int* h = new int;
    delete h;
}

int main(){
    stackExample();
    heapExample();

    return 0;
}
