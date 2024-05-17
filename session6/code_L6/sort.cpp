// C++ program to demonstrate descending order sort using greater<>().
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class People {
public:
    People() {};
    People(int _age, double _h, string _n): age(_age), height(_h), name(_n) {} 
    
    int age;
    double height;
    std::string name;

    bool operator<(const People& obj) const { 
        return height < obj.height; 
    }
};

template <class T> struct is_greater {
  bool operator() (const T& x, const T& y) const {return x.name > y.name;}
 /*  typedef T first_argument_type;
  typedef T second_argument_type;
  typedef bool result_type; */
};

int main()
{
	if (true) {
        int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	    int n = sizeof(arr) / sizeof(arr[0]);

        //sort by decreasing
	    sort(arr, arr + n, greater<int>());
	    cout << "Array after sorting : \n";
	    for (int i = 0; i < n; ++i)
		    cout << arr[i] << ",";
        cout<<endl;

        //sort by ascending
        sort(arr, arr + n, less_equal<int>());
        cout << "Array after sorting : \n";
	    for (int i = 0; i < n; ++i)
		    cout << arr[i] << ",";
        cout<<endl;
    }
    
    if (true) {
        People p1 = People(20, 180, "tom");
        People p2 = People(23, 173, "mike");
        People p3 = {18, 168, "alice"};
        std::vector<People> mylist = {p1,p2,p3};
        
        //sort by decreasing
	    sort(mylist.begin(), mylist.end());
	    cout << "Array after sorting : \n";
	    for (int i = 0; i < mylist.size(); ++i)
		    cout << mylist[i].name << ",";
        cout<<endl;

        sort(mylist.begin(), mylist.end(), is_greater<People>());
	    cout << "Array after sorting : \n";
	    for (int i = 0; i < mylist.size(); ++i)
		    cout << mylist[i].name << ",";
        cout<<endl;

    }
    
}