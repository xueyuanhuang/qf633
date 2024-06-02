#include <iostream>
#include <exception>
#include <vector>

class Rectangle
{
public:
    Rectangle(){};
    Rectangle(int l, int b) : length(l), breadth(b){};
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

private:
    int length;
    int breadth;
};

void fun()
{
    Rectangle *p = new Rectangle();
    std::cout << "Retangle length is: " << p->getLength() << std::endl;
}

void some_complex_function(Rectangle *ptr)
{
    try
    {
        double edge = ptr->getLength();
        double area = ptr->getBreadth() * edge;
        std::cout << "area of shape: " << area << std::endl;
        std::cout << area / 0 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "some error" << std::endl;
    }
}

int main()
{
    if (0)
    {
        std::string input = "";
        while (input != "stop")
        {
            std::cin >> input;
            fun();
        }
    }

    if (1)
    {
        std::vector<double> values({1.0, 0., 0.2, 3.2, -2, 3.4, 5.1});
        for (auto &value : values)
        {
            Rectangle *p = new Rectangle(value, value);
            some_complex_function(p);
            delete p;
        }
    }

    return 0;
}