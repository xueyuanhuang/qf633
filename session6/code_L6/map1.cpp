// C++ program to illustrate the begin and end iterator
#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main(){
    // std::map<std::string, int> mp;
    std::unordered_map<std::string, int> mp;

    // mp["one"] = 1;
    mp["three"] = 25;
    mp["thr"] = 25;
    mp["abc"] = 25;
    mp.insert(std::pair<std::string, int>("tired",666));

    for(auto it = mp.begin(); it != mp.end(); ++it){
        std::cout << it->first << "\t" << it->second << std::endl;
    }

    // mp.erase(mp.begin(), mp.find("thr"));
    // mp.erase(mp.find("thr"), mp.find("three"));
    std::cout << (mp.erase("ired")?"sucess":"fail") << std::endl;

    // std::map<std::string, int> mp2 = mp;
    std::map<std::string, int> mp2(mp.begin(), mp.end());

    std::cout << mp2.size() << std::endl;
    // std::map<std::string, int>::iterator it = mp2.begin();

    // while(it!=mp2.end()){
    //     std::cout << it->first << "\tvalue:" << it->second << std::endl;
    //     it++;
    // }

    return 0;
}