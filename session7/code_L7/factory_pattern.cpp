#include <iostream>
#include <string>
#include <memory>

using namespace std;

// Abstract product class
class Shape {
public:
    virtual void draw() = 0; //interface function
    virtual ~Shape() {} // Virtual destructor for polymorphism
};

// Concrete product class - Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Concrete product class - Square
class Square : public Shape {
public:
    void draw() override {
        cout  << "Drawing a Square" << endl;
    }
};

// Abstract creator class
class ShapeFactory {
public:
    virtual std::unique_ptr<Shape> createShape() = 0;
    virtual ~ShapeFactory() {} // Virtual destructor for polymorphism
};

// Concrete creator class - CircleFactory
class CircleFactory : public ShapeFactory {
public:
    std::unique_ptr<Shape> createShape() override {
        return std::make_unique<Circle>();
    }
};

// Concrete creator class - SquareFactory
class SquareFactory : public ShapeFactory {
public:
    std::unique_ptr<Shape> createShape() {
        return std::make_unique<Square>();
    }
};

int main() {
	
    auto circleFactory = std::unique_ptr<ShapeFactory>(new CircleFactory());
    auto squareFactory = std::unique_ptr<ShapeFactory>(new SquareFactory());

    auto circle = circleFactory->createShape();
    auto square = squareFactory->createShape();

    circle->draw(); // Output: Drawing a Circle
    square->draw(); // Output: Drawing a Square

    return 0;
}