#include <iostream>
#include <vector>
#include <map>

int main(){
    if(0){
        std::vector<int> vec{10, 20, 30};

        std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), 30);
        if (it != vec.end()){
            std::cout << *it << std::endl;
            std::cout << it - vec.begin() << std::endl;
            // std::cout << vec.begin() << std::endl;
        }
    }

    if(1){
        std::map<char,int> mymap;

        mymap['a']=50;
        mymap['b']=100;
        mymap['c']=150;
        mymap['d']=200;

        std::map<char, int>::iterator it = mymap.find('b');
        if(it!=mymap.end()){
            mymap.erase(it);
        }

        for(auto it = mymap.begin(); it != mymap.end(); ++it){
            std::cout << it->first << std::endl;
        }

    }

    return 0;
}