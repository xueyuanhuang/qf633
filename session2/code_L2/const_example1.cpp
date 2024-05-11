#include <iostream>

using namespace std;

int main()
{
    const int maxAttempts = 3;
    int score = 100;

    const int *constPointer = &score;
    const int &constReference = score;

    // maxAttempts = 4;
    // error: cannot assign to variable 'maxAttempts' with const-qualified type 'const int'
    // maxAttempts = 4;

    // (*constPointer)++; error: read-only variable is not assignable
    cout << "before: " << constPointer << endl;
    constPointer++;
    cout << "after: " << constPointer << endl;

    // constReference++; error: cannot assign to variable 'constReference' with const-qualified type 'const int &'
}