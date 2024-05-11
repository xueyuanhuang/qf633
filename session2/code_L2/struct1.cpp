#include <iostream>
#include <string>

using namespace std;

struct Person{
    std::string name;
    int age;
    double height;
};

int main(){
    Person p1;

    p1.name = "denton";
    p1.age = 25;
    p1.height = 178;

    std::cout << "p1 information: " << endl;
    std::cout << "Name: " << p1.name << endl;
    std::cout << "Age: " << p1.age << endl;
    std::cout << "Height: " << p1.height << endl;

    // /*wwhat if I don't return this?*/return 0;
}