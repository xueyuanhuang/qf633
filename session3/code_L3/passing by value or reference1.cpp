#include <iostream>


int addByValue(int a, int b){
    return a++ + b++;
};

int addByReference(int& a, int& b){
    return a++ + b++;
};

struct Point{
    int x;
    int y;
};

Point createPoint(int x, int y){
    Point p;
    p.x = x;
    p.y = y;

    return p;
};

int main(){
    int x = 7, y = 4;

    int res = addByValue(x, y);
    std::cout << "Result addByValue: " << res << std::endl;
    std::cout << "original x:" << x << ", y:" << y << std::endl;

    res = addByReference(x, y);
    std::cout << "Result addByReference: " << res << std::endl;
    std::cout << "x:" << x << ", y:" << y << std::endl;

    Point p = createPoint(x, y);
    std::cout << "x: " << p.x << std::endl;
    std::cout << "y: " << p.y << std::endl;

    return 0;
}