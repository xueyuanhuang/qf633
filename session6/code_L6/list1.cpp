#include <iostream>
#include <list>

int main(){
    std::list<int> myList;
    myList.push_back(250);
    myList.push_back(666);
    myList.push_back(290);

    for(std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it){
        std::cout << *it << std::endl;
    }

    for(const auto& element:myList){
        std::cout << element << " ";
    }

    std::cout << myList.size() << std::endl;


    // myList.pop_front();
    // myList.pop_back();
    for(const auto& element:myList){
        std::cout << element << " ";
    }

    // myList.clear();
    std::cout << "is this list empty?" <<(myList.empty()?"yes":"no") << std::endl;

    myList.insert(++myList.begin(), 5);
    std::cout << myList.front() << std::endl;


    return 0;
}