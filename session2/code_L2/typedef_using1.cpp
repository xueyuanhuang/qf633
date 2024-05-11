#include <iostream>

typedef double Distance;

using namespace std;

int main(){
    Distance length = 10.5;
    Distance width = 3.5;

    Distance area = length*width;

    cout << "lenth: " << length << endl;
    cout << "width: " << width << endl;
    cout << "area: " << area << endl;
}