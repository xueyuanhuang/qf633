#include <iostream>
#include <stack>

template <typename S>
void traverse_stack(std::stack<S>& stack){
    if(stack.empty()){
        return;
    }
    S x = stack.top();
    std::cout << x << std::endl;
    stack.pop();
    traverse_stack(stack);
    stack.push(x);
}


int main(){
    std::stack<std::string> crypto;

    crypto.push("BTC");
    crypto.push("ETH");
    crypto.push("SOL");

    // crypto.pop();
    traverse_stack(crypto);
    std::cout << crypto.top() << std::endl;

    return 0;
}