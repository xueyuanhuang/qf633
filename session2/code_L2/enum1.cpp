#include <iostream>

using namespace std;

enum Days{
    Sunday,
    Monday, 
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    Days today = Wednesday;

    switch(today){
        case Sunday:
            cout << "it's Sunday!" << endl;
            break;
        case Monday:
            cout << "it's Monday!" << endl;
            break;
        case Tuesday:
            cout << "it's Tuesday!" << endl;
            break;
        case Wednesday:
            cout << "shit! it's Wednesday!!!!" << endl;
            break;
        case Thursday:
            cout << "it's Thursday!" << endl;
            break;
        case Friday:
            cout << "it's Friday!" << endl;
            break;
        case Saturday:
            cout << "it's Saturday!" << endl;
            break;
    }
}