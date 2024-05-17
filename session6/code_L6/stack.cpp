#include <iostream>
#include <stack>
using namespace std;

template <typename T>
void traverse_stack(stack<T> & st) {
    if(st.empty())
        return;
    T x = st.top();
    cout << x << endl;
    st.pop();
    traverse_stack(st);
    st.push(x);
}

int main() {
    // create a stack of strings
    stack<string> languages;
    
    // add element to the Stack
    languages.push("C++");
    languages.push("C#");
    languages.push("Java");
    languages.push("Python");
    languages.push("PHP");
    
    // print top element
    cout << "Stack top is: " << languages.top() <<endl;
    
    // delete from top
    languages.pop();
    cout << "Stack top is: " << languages.top() <<endl;
    
    // it is impossble to loop through stack directly, however ...
    traverse_stack(languages);

    return 0;
}