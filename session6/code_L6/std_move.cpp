// CPP program to illustrate move and move_backward 
#include<algorithm>
#include<vector>
#include<iostream>
#include <iomanip>
#include <string>
#include <utility>

using namespace std;

/*
template< class T >
typename remove_reference<T>::type&& move( T&& t ) noexcept;

template< class T >
constexpr remove_reference_t<T>&& move( T&& t ) noexcept;
(since C++14)

*/

// Driver code 
int main() 
{ 
	//ilustrate move()
	if (true) {
		string str = "Salut";
		vector<string> v;
	
		// uses the push_back(const T&) overload, which means
		// we'll incur the cost of copying str
		v.push_back(str);
		cout << "After copy, str is " << quoted(str) << '\n';
	
		// uses the rvalue reference push_back(T&&) overload,
		// which means no strings will be copied; instead, the contents
		// of str will be moved into the vector. This is less
		// expensive, but also means str might now be empty.
		v.push_back(std::move(str));
		cout << "After move, str is " << quoted(str) << '\n';
	
		cout << "The contents of the vector are {" << quoted(v[0])
				<< ", " << quoted(v[1]) << "}\n";

	}
	
	if (true) {
		vector <int> vec1 {1, 2, 3, 4, 5}; 
		vector <int> vec2 {7, 7, 7, 7, 7}; 

		// Print elements 
		cout << "Vector1 contains :"; 
		for(int i = 0; i < vec1.size(); i++) 
			cout << " " << vec1[i]; 
		cout << "\n"; 
		
		// Print elements 
		cout << "Vector2 contains :"; 
		for(unsigned int i = 0; i < vec2.size(); i++) 
			cout << " " << vec2[i]; 
		cout << "\n\n"; 
		
		// move function move first 4 element from vec1 to starting position of vec2 
		std::move(vec1.begin(), vec1.begin() + 4, vec2.begin() + 1); 
		
		// print elements 
		cout << "Vector2 contains after move function:"; 
		for(unsigned int i = 0; i < vec2.size(); i++) 
			cout << " " << vec2[i]; 
		cout << "\n"; 
		
		cout << "Vector1 contains after move function:"; 
		for(unsigned int i = 0; i < vec1.size(); i++) 
			cout << " " << vec1[i]; 
		cout << "\n"; 

	}
	
	return 0; 
}