#include <iostream>

template <typename T1, typename T2>
class Pair{
private:
    T1 first;
    T2 second;
public:
    Pair(T1 first, T2 second):first(first), second(second){
        std::cout << "constructor" << std::endl;
    }
    void getFirst() const{
        std::cout << first << std::endl;
    }
    void getSecond() const{
        std::cout << second << std::endl;
    }
};

int main(){
    Pair<int, double> p1(25, 2.5);
    p1.getFirst();
    p1.getSecond();

    Pair<std::string, float> p2("crypto", 2.225);
    p2.getFirst();
    p2.getSecond();

    return 0;
}