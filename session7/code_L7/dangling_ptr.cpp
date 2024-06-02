
#include <iostream>

using namespace std;

int* fun()
{
    // x now has scope throughout the program
    int x = 5;
    return &x;
}

int main() {

	// example 1: underlying variable has been de-allocated due to out of scope, where pointer still holding memory address of it
	if (false) {
		int* ptr = new int;
		// creating a block
		{
			int a = 10;
			ptr = &a;
			cout << &a << endl;
		}
		// ptr here becomes dangling pointer
		cout<< *ptr <<endl;
		//delete ptr; //will have error due to referred variable is de-allocated already
	}

	// example 2: returning pointer type from function
	if (true) {
		int* p = fun();
    	fflush(stdin);
		
    	// p points to something which is not valid anymore
		cout << "test: " << *p << endl;
		std::cout << std::endl;
		printf("%d", *p);
		
    	
	}

    return 0;
}