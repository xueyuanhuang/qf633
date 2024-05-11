#include <iostream> // Preprocessor Directive: Includes the Input/Output stream library
#include <vector>   // Preprocessor Directive: Includes the Standard Template Library for dynamic arrays
#include <string>   // Preprocessor Directive: Includes the string type library

using namespace std; // Namespace Directive: Uses the standard namespace, allowing unqualified access to all names in the std namespace

int main() // Main Function: Entry point of the C++ program
{          // Opening Brace: Marks the beginning of a function's body
    // Declaration of a vector of strings with initializer list syntax
    vector<string> msg = {"hello", "c++", "world", "from", "vs code"}; // Variable Declaration: Initializes a vector of strings with predefined values

    // Range-based for loop to iterate over each element in the vector 'msg'
    for (const string &word : msg) // Loop Structure: Iterates over the vector 'msg' taking each element by reference to avoid copying
    {
        cout << word << " "; // Output Statement: Outputs each word followed by a space to the standard output (console)
    }
    cout << endl; // Output Statement: Inserts a newline character and flushes the buffer
} // Closing Brace: Marks the end of a function's body
