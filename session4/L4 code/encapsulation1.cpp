#include <iostream>

static const double PAI = 3.1415926;

class Circle{
private:
    double radius;

public:
    void setRadius(double r){
        if(r > 0){
            radius = r;
        }else{
            std::cout << "Invaid radius" << std::endl;
        }
    }

    double getArea(){
        return PAI*radius*radius;
    }

    inline int getRadius(){
        return radius;
    }
};

int main(){
    Circle c;
    c.setRadius(5);
    std::cout << c.getArea() << std::endl;
    std::cout << c.getRadius() << std::endl;

    return 0;
}