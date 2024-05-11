#include <iostream>

int (*addPtr) (int, int);

int add(int a, int b){
    return a+b;
};

void performOperation(int a, int b, int (*guesswhat)(int, int)){
    int res = (*guesswhat)(a, b);
    std::cout << "The result: " << res << std::endl;
};

void callbackFunction(){
    std::cout << "callbackFunction being called" << std::endl;
};

void performCallback(void (*whatever)()){
    (*whatever)();
}

int main(){
    addPtr = &add;
    int res1 = addPtr(3, 4);
    std::cout << "the result of add: " << res1 << std::endl;

    int res2 = (*addPtr)(4,4);
    std::cout << "the result of add: " << res2 << std::endl;

    performOperation(6, 6, addPtr);

    performCallback(callbackFunction);

    return 0;
}