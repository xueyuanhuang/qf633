#include <iostream>

void divideNumber(int numerator, int denumerator){
    if (denumerator == 0){
        throw std::runtime_error("Error: Division by zero");
    }

    int result = numerator/denumerator;
    std::cout << "Result of devision: " << result << std::endl;
}

int main(){
    try{
        divideNumber(10,2);
        divideNumber(5,0);
    }catch(const std::exception& e){
        std::cerr << "Exception caught: " << e.what() << std::endl; 
    }

    return 0;
}