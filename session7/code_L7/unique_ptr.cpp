#include <memory> //remember all smart pointer need to include this header
#include <string>
#include <iostream>
#include <utility>

using namespace std;

void my_func()
{
    unique_ptr<int> ptr(new int(13));
    int x = 45;

    // create a new unique_ptr ptr2 and move the ownership of ptr to ptr2
    unique_ptr<int> ptr2 = std::move(ptr);
    // ptr is now empty
    if (x == 45)
        return; // no memory leak anymore!

    // you don't have to delete the pointer variable ptr, the memory will automatically be freed after the return statement.
}

class Student
{

public:
    Student(){};
    Student(const Student &other){};
    Student(string name, int age) : _name(name), _age(age) {}
    void displayInfo()
    {
        cout << "Stdudent: " << _name << "\t" << ", Age: " << _age << endl;
    }
    void updatenfo(string name, int age)
    {
        _name = name;
        _age = age;
    }

private:
    string _name;
    int _age;
};

iostream &operator<<(iostream &os, Student &s)
{
    os << &s << endl;
    return os;
};

int main()
{
    // example 1, basic usage
    if (true)
        my_func();

    // exmaple 2, with class object
    if (true)
    {
        // create
        auto s1 = std::make_unique<Student>();
        s1->updatenfo("alice", 22);
        auto s2 = std::unique_ptr<Student>(new Student("mike", 23));

        // old way of copy construction
        auto s4 = new Student("tom", 25);
        s4->displayInfo();
        Student *s5(s4);
        s5->displayInfo();
        // cout << "s5 address: " << s5 << " and having value of " << &s5 << endl;
        delete s4;
        // delete s5;
        // delete s5; this line will have issue
        cout << "s5 address: " << s5 << " and having value of " << &s5 << endl;
        // auto s3(s2); this will not work from unique ptr
        std::unique_ptr<Student> s3 = std::move(s2);
        s3->displayInfo();
        // s2->displayInfo(); // this line will be wrong since s2 and its underlying is de-allocated already
    }

    return 0;
}