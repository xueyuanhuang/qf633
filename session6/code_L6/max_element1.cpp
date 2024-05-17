#include <iostream>
#include <algorithm>
#include <vector>

bool comp(int a, int b){
    return a < b;
}

class People{
public:
    People(){}
    People(int age, double height, std::string name):age(age), height(height), name(name){}
    int age;
    double height;
    std::string name;
};

std::ostream& operator<<(std::ostream& os, const People& p){
    os << "name: " << p.name << ", " << "age: " << p.age << ", " << "height: " << p.height;
    return os;
}

int main()
{
    if (0)
    {
        std::vector<int> a = {1, 45, 54, 71, 76, 12};

        std::cout << *std::min_element(a.begin(), a.end()) << std::endl;
        std::cout << *std::max_element(a.begin(), a.end()) << std::endl;

        auto mm = std::minmax_element(a.begin(), a.end());
        std::cout << *mm.first << "\t" << *mm.second << std::endl;
    }

    if(0){
        int v[] = { 9, 14, 7, 2, 5, 10, 11, 12, 1, 3, 6 }; 

        int* i;
        i = std::max_element(v, v+2, comp);

        std::cout << *i << std::endl;
    }

    if(1){
        People p1 = People(20, 180, "tom");
        People p2 = People(23, 173, "mike");
        People p3 = {18, 168, "alice"};
        std::vector<People> lst =  {p1, p2, p3};

        std::vector<People>::iterator max = std::max_element(lst.begin(), lst.end(), [](const People& p1, const People& p2){
            return p1.height < p2.height;
        });

        std::cout << *max << std::endl;
    }

    return 0;
}