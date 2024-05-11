#include <iostream>

using namespace std;
int main()
{
    const int arrSize = 5;
    int myArr[arrSize] = {8, 56, 324, 2342, 2347823};
    cout << "The element of my array: " << endl;
    for (size_t i = 0; i < arrSize; i++)
    {
        cout << "element" << i + 1 << ": " << myArr[i] << endl;
    }

    char myArr2[12] = {'f', 'u'};
    cout << "The element of my array2:" << endl;
    for (size_t i = 0; i < 12; i++){
        cout << "element" << i+1 << ": " << myArr2[i] << endl;
    }

    cout << "the length of length should be: " << sizeof("length") << endl;

    char myArr3[] = "Complie and Run Exec!";
    cout << "The element of my array3:" << endl;
    for (size_t i = 0; i < sizeof(myArr3); i++){
        cout << "element" << i+1 << ": " << myArr3[i] << endl;
    }

    return 0;
}