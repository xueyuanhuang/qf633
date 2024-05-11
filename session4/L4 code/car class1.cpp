#include <iostream>

class Car{
public:
    std::string brand;
    int year;

    void displayInfo(){
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

int main(){
    Car toyota;

    toyota.brand = "Toyata";
    toyota.year = 2024;

    toyota.displayInfo();

    Car* car1 = new Car;
    car1->brand = "Telsa";
    car1->year = 2025;
    car1->displayInfo();
    


    delete car1;

    return 0;
}