#include <iostream>
#include <algorithm>
#include <vector>

class People{
public:
    People(){};
    People(int age, double height, std::string name):age(age), height(height),name(name){};
    int age;
    double height;
    std::string name;

    // true don't swap, false swap
    bool operator<(const People& obj) const{
        return height < obj.height;
        // return height > obj.height;
    }
};

template <class T>
struct is_greater{
    bool operator() (const T& x, const T& y) const {
        // return x.name > y.name;
        return x.name < y.name;
        // return false;
        // return true;
    }
};

int main(){
    if(0){
        int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
        // std::cout << sizeof(arr)/sizeof(arr[0]) << std::endl;
        int n = sizeof(arr)/sizeof(arr[0]);

        // std::sort(arr, arr+n);
        // std::sort(arr, arr+n, std::greater<int>());
        std::sort(arr, arr+n, std::less_equal<int>());

        for(int i = 0; i < n; ++i){
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }

    if(1){
        People p1 = People(20, 180, "lr");
        People p3 = People(21, 177, "denton");
        People p2 = {22, 166, "xsh"};
        
        std::vector<People> lst = {p1, p2, p3};

        std::sort(lst.begin(), lst.end());
        // std::sort(lst.begin(), lst.end(), is_greater<People>());
        for(int i = 0; i < lst.size(); ++i){
            std::cout << lst[i].name << "\t";
        }
        std::cout << "\n";

        // std::cout << (p1 < p3) << std::endl;

    }

    return 0;
}