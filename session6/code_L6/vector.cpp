// C++ program to illustrate the element access in vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	if (true)
    {
        //declare a vector of integer
        vector<int> v1;
        
        //insert from behind, checking the memory allocation
        for (int i = 1; i <= 10; i++){
        // for (int i = 1; i <= 10; i++){
            cout<< "element memory address before push back: " << &v1[i] << endl;
            v1.push_back(i * 10);
            cout<< "element memory address after push back: " << &v1[i] << endl;
        }

        // for(auto i : v1){
        //     std::cout << i << std::endl;
        // }
             
        //accessing element using index
        cout << "\nReference operator [g] : v1[2] = " << v1[2];
        cout << "\nat : v1.at(4) = " << v1.at(4);

        //accessing front and back
        cout << "\nfront() : v1.front() = " << v1.front();
        cout << "\nback() : v1.back() = " << v1.back();

        // pointer to the first element
        int* pos = v1.data();
        cout << "\nThe first element is " << *pos <<endl;
    }
    

    if (true) {
        vector<int> v2;

        for (int i = 1; i <= 5; i++)
            v2.push_back(i);

        cout << "Size : " << v2.size();
        cout << "\nCapacity : " << v2.capacity();
        cout << "\nMax_Size : " << v2.max_size();

        // resizes the vector size to 4
        v2.resize(4);

        // prints the vector size after resize()
        cout << "\nSize : " << v2.size();

        // checks if the vector is empty or not
        if (v2.empty() == false)
            cout << "\nVector is not empty";
        else
            cout << "\nVector is empty";

        // shrinks the vector
        v2.shrink_to_fit();
        cout << "\nVector elements are: ";

        // using iterator
        for (auto it = v2.begin(); it != v2.end(); it++)
            cout << *it << " ";

    }


    if (true) {
	    vector<int> v3;
	
        // fill the vector with 10 five times
        v3.assign(5, 10);
        
        // removes last element
        v3.pop_back();
        
        // inserts 5 at the beginning
        v3.insert(v3.begin(), 5);
        
        // removes the first element
        v3.erase(v3.begin());
        
        // inserts at the beginning
        // emplace vs insert: insert copy the object | emplace construct the object implicitly
        v3.emplace(v3.begin(), 5);
        cout << "\nThe first element is: " << v3[0];
        
        // Inserts 20 at the end
        v3.emplace_back(20);
        int n = v3.size();
        cout << "\nThe last element is: " << v3[n - 1];
        
        // erases the vector
        v3.clear();
        cout << "\nVector size after clear(): " << v3.size();

    }

	return 0;
}