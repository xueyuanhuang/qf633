#include <iostream>
#include <set>

int main(){
    std::set<int> s;
    s.insert(2);
    s.insert(66);
    s.insert(666);
    s.insert(266);
    s.insert(666);

    for(std::set<int>::iterator it = s.begin(); it != s.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // s.erase(666);
    // s.clear();
    std::cout << s.size() << std::endl;
    std::cout << "666 is in ?" << (s.count(666)?"yes":"no") << std::endl;;

    // for(const auto& ele: s){
    //     std::cout << ele << " ";
    // }
    // std::cout << std::endl;

    return 0;
}