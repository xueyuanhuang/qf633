// C++ program to find the min and max element of Vector using *min_element(), *max_element(), *minmax_element() in STL
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(int a, int b) 
{ 
    return (a < b); 
    // return (a > b); 
} 

class People {
public:
    People() {};
    People(int _age, double _h, string _n): age(_age), height(_h), name(_n) {} 
    
    int age;
    double height;
    std::string name;
    bool operator<(const People& obj)const { 
    return height > obj.height; 
    }       
};

ostream& operator<<(ostream& os, const People& obj) {
    os<<"name: "<<obj.name <<", " << "age: "<< obj.age <<", "<<"height: "<<obj.height<<endl; 
    return os;
}

int main()
{
	// Get the vector
	vector<int> a = { 1, 45, 54, 71, 76, 12 };

	// Print the vector
	cout << "Vector: ";
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;

	// Find the min element
	cout << "\nMin Element = "
		<< *min_element(a.begin(), a.end());

	// Find the max element
	cout << "\nMax Element = "
		<< *max_element(a.begin(), a.end());

	// Find min, max pair
	auto minmax = minmax_element(a.begin(), a.end());
	cout << "\npair_min = " << *minmax.first << ", pair_max = " << *minmax.second << '\n';

    if (true) {
        // find max element using user defined function 
        int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 }; 

        // Finding the maximum value between the third and the ninth element 
        int* i1; 
        i1 = std::max_element(v + 2, v + 9, comp); 

        cout << *i1 << "\n"; 
    
    }

    if (true) {
        // find max element for class object, using lambda function comparator
        People p1 = People(20, 180, "tom");
        People p2 = People(23, 173, "mike");
        People p3 = {18, 168, "alice"};
        std::vector<People> MySuperVector = {p1,p2,p3};
        auto max = std::max_element( MySuperVector.begin(), MySuperVector.end(),
                             []( const People &a, const People &b) {
                                 return a.height < b.height;
                             }); 

        std::sort(MySuperVector.begin(), MySuperVector.end());                   
        for(auto it : MySuperVector){
            std::cout << it << std::endl;
        }
        cout<< *max <<endl;
    }

	return 0;
}
