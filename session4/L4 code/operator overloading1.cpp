#include <iostream>

class Complex{
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i):real(r), imaginary(i){}

    Complex operator+(const Complex& other)const{
        return Complex(real+other.real, imaginary+other.imaginary);
    }

    void display() const{
        std::cout << real << "+" << imaginary << std::endl;
    }
};

int main(){
    Complex c1(1.5, 2.4);
    Complex c2(2.3, 4.2);

    Complex c = c1+c2;
    c.display();

    return 0;
}