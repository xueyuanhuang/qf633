#include <iostream>
#include <set>

using namespace std;

int main() {
    // Creating a set of integers
    set<int> mySet;

    // Inserting elements
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(40);
    mySet.insert(20); // Duplicate elements are ignored

    // Iterating through the set using an iterator
    cout << "Set elements: ";
    for (set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }

    // Accessing elements using range-based for loop (C++11 and later)
    cout << "\nSet elements (using range-based for loop): ";
    for (const auto &element : mySet) {
        cout << element << " ";
    }

    // Checking if an element is present in the set
    int searchElement = 20;
    cout << "\nIs " << searchElement << " present in the set? " << (mySet.count(searchElement) ? "Yes" : "No") << std::endl;

    // Erasing an element from the set
    mySet.erase(20);

    // Size of the set
    cout << "Size of the set: " << mySet.size() << std::endl;

    // Clearing all elements from the set
    mySet.clear();

    // Checking the size after clearing
    cout << "Size of the set after clearing: " << mySet.size() << std::endl;

    return 0;
}