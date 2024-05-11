#include <iostream>

template <typename T>
class Container{
private:
    T data;
public:
    Container(T value):data(value){
        std::cout << "constructor" << std::endl;
    }

    T getValue() const{
        return data;
    }
};

int main(){
    Container<int> intC(12);
    std::cout << intC.getValue() << std::endl;

    Container<double> doubleC(2.5);
    std::cout << doubleC.getValue() << std::endl;

    Container<std::string> stringC("hello crypto!");
    std::cout << stringC.getValue() << std::endl;

    return 0;
}