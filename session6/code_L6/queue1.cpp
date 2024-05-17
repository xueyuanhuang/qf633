#include <iostream>
#include <queue>

// void print_queue(std::queue<int>& q){
void print_queue(std::queue<int> q){
    // std::queue<int> temp = q;
    // while(!temp.empty()){
    while(!q.empty()){
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << "\n";
}

template <typename T>
void eras_queue(std::queue<T>& q){
    if(q.empty()){
        return;
    }
    q.pop();
    eras_queue(q);
}

int main(){
    std::queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);

    print_queue(q1);
    std::cout << q1.size() << std::endl;
    // std::cout << q1.front() << std::endl;
    // std::cout << q1.back() << std::endl;

    std::queue<int> q2;
    q2.push(4);
    q2.push(5);
    // q2.push(6);
    q1.swap(q2);
    eras_queue(q1);
    print_queue(q1);



    


    return 0;
}