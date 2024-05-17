// C++ program to Demonstrate std::find for vectors
#include <algorithm>
#include<iostream>
#include<vector>
#include<map>

// Driver code
int main()
{
    if (true) {
        // using std::find working on vector
        std::vector<int> vec{10, 20, 30, 40};

        // Iterator used to store the position of searched element
        std::vector<int>::iterator it;

        // Print Original Vector
        std::cout << "Original vector :";

        for (int i = 0; i < vec.size(); i++)
            std::cout << " " << vec[i];
        std::cout << "\n";

        // Element to be searched
        int ser = 30;

        // std::find function call
        it = std::find(vec.begin(), vec.end(), ser);
        if (it != vec.end()) {
            std::cout << "Element " << ser << " found at position : ";
            std::cout << it - vec.begin() << " (counting from zero) \n";
        }
        else
            std::cout << "Element not found.\n\n";
    }
    
    if (true) {
        //using std::map::find() work on map
        std::map<char,int> mymap;
        std::map<char,int>::iterator it;

        mymap['a']=50;
        mymap['b']=100;
        mymap['c']=150;
        mymap['d']=200;

        it = mymap.find('b');
        if (it != mymap.end())
            mymap.erase (it);

        // print content:
        std::cout << "elements in mymap:" << '\n';
        std::cout << "a => " << mymap.find('a')->second << '\n';
        std::cout << "c => " << mymap.find('c')->second << '\n';
        std::cout << "d => " << mymap.find('d')->second << '\n';      
    }

    return 0;
}