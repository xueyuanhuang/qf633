#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    auto add = [](int a, int b){return a+b;};
    std::cout << "sum: " << add(3, 4) << std::endl;

    std::vector<int> numbers = {250, 324, 666, 234, 564};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b){return a > b;});

    std::cout << "sorted number in descending order:" << std::endl;
    for (int num:numbers){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int base = 250;
    auto addWithBase = [base](int a){return base+a;};
    std::cout << "addWithBase:" << addWithBase(40) << std::endl; 

    return 0;
}