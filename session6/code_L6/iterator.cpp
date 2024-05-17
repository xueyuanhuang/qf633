// C++ program to demonstrate an input iterators

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

template<class ForwardIterator>                                       // function template  
void display(ForwardIterator first, ForwardIterator last)            // display function  
{  
	while(first!=last)  
	{  
		cout<<*first<<" ";  
		first++;  
	}  
} 

int main()
{
	// example of using input iterator
	if (true) {
		vector<int> v = { 1, 2, 3 };

		// Accessing the elements without using iterators
		cout << "Without iterators = ";
		int j;	
		for (j = 0; j < 3; ++j) {
			cout << v[j] << " ";
		}
		
		// Accessing the elements using iterators forward
		cout << "\nWith iterators = ";
		vector<int>::iterator i;
		for (i = v.begin(); i != v.end(); ++i) {
			cout << *i << " ";
		}	
		
		if (i == v.end())
			cout<< "iterator points to end of container"<<endl;
	}

	// example of using output iterator
	if (true) {
		std::vector<int> numbers = {1, 2, 3, 4, 5};

    	// Using std::ostream_iterator as an output iterator
   		std::ostream_iterator<int> outputIterator(std::cout, " ");

    	// Writing elements from the vector to the standard output
    	for (const auto& element : numbers) {
        	*outputIterator = element;  // Writing to the output iterator
        	++outputIterator;           // Advancing the iterator
    	}

    	std::cout << std::endl;

	}
	
	//example of using forward iterator
	if (true) {
		vector<int> a;                          // declaration of vector.  
		for(int i=1;i<=10;i++) {  
			a.push_back(i);  
		}  
		display(a.begin(),a.end());                // calling display() function.  
	}

	return 0;
}