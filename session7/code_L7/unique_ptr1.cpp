#include <iostream>

using namespace std;

void my_func(){
    unique_ptr<int> ptr(new int(13));

    unique_ptr<int> ptr2 = std::move(ptr);

    return;
}

int main()
{
    if(1){
        my_func();
    }

    return 0;
}