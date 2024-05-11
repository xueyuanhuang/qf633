#include<iostream>

class Shape{
public:
    virtual double area() const = 0;
    virtual void display() const = 0;

    virtual ~Shape(){
        std::cout << "Base Deconstructor" << std::endl;
    };
};

class Circle:public Shape{
private:
    double radius;

public:
    Circle(double r):radius(r){}

    double area() const override{
        return 3.14 * radius * radius;
    }
    void display() const override{
        std::cout << "radius: " << radius << ", area: " << area() << std::endl;
    }
};

class Square:public Shape{
private:
    double edge;

public:
    Square(double edge):edge(edge){}

    double area() const override{
        return edge*edge;
    }
    void display() const override{
        std::cout << "edge: " << edge << ", area: " << area() << std::endl;
    }
};

int main(){
    // Shape s;
    // s.display();

    // Circle c(1);
    // c.display();

    Shape* c2 = new Circle(2);
    c2->display(); 
    delete c2;

    // Square s(2);
    // s.display();

    return 0;
}