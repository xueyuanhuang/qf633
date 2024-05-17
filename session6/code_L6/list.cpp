#include <iostream>
#include <list>

using namespace std;

int main() {
    // Creating a list of integers
    list<int> myList;

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5); // this is very natural
    
    // cannot access by index
    // cout << myList[1] << endl;
    
    // Iterating through the list using an iterator
    cout << "List elements: ";
    for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << endl;
    }

    // Accessing elements using range-based for loop (C++11 and later)
    std::cout << "\nList elements (using range-based for loop): " <<endl;
    for (const auto &element : myList) {
        std::cout << element << " at address of: " << &element <<endl;
    }

    // Size of the list
    std::cout << "\nSize of the list: " << myList.size() << std::endl;

    // Removing elements from the list at begining and end
    myList.pop_back();
    myList.pop_front();
    
    // Insert and remove by using iterator
    auto iter = myList.begin();
    myList.insert(iter, 30);
    iter++;
    myList.erase(iter);

    // Checking if the list is empty
    std::cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    // Clearing all elements from the list
    myList.clear();

    // Checking the size after clearing
    std::cout << "Size of the list after clearing: " << myList.size() << std::endl;

    return 0;
}