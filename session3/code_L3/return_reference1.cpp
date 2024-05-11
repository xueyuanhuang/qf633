#include <iostream>
#include <vector>

std::vector<int>& getVector(){
    static std::vector<int> myVector = {1, 2, 3, 4, 5}; 
    // std::vector<int> myVector = {1, 2, 3, 4, 5}; 

    return myVector;
};

class test{
public:
    int x;
};

const test& getTestRef(const test& t){
    return t;
}

int main(){
    std::vector<int> vecRef = getVector();
    vecRef.push_back(6);

    for(int value:vecRef){
        std::cout << value << " ";
    };
    std::cout << std::endl;

    if(1) {
        test* t1 = new test();
        test t2 = test();
        t2.x = 5;
        t1->x = 15;
        auto t_ref = getTestRef(t2);
        std::cout << t_ref.x << std::endl;
        t_ref.x = 200;
        std::cout << "t2 x:" << t2.x << std::endl;
        std::cout << "t_ref x" << t_ref.x << std::endl;
        delete t1;
    };

    return 0;
}
