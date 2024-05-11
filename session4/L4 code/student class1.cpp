#include <iostream>
#include <string>

class Book{
public:
    Book(std::string name_){
        name = name_;
    }
    std::string name;
};

class Student{
public:
    // Student(std::string name, int age):studentName(name),studentAge(age){
    Student(std::string name, int age):studentAge(age),studentName(name){ 
        std::cout << "student object created" << std::endl;
    }
    ~Student(){
        std::cout << "student object destoried:" << studentName << std::endl;
    }
    void displayInfo(){
        std::cout << "studentName: " << studentName << ", studentAge: " << studentAge << std::endl;
    }

private:
    std::string studentName;
    int studentAge;
};

int main(){
    Student stu("jack", 22);
    stu.displayInfo();

    Student* stu1 = new Student("Jane", 99);
    stu1->displayInfo();
    delete stu1;


    return 0;
}