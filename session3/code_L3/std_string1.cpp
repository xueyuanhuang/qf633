#include <iostream>
#include <string>

int main(){
    std::string name = "denton";
    std::string greeting = "hello, ";

    std::cout << greeting+name << std::endl;

    std::cout << "length of greeting: " << greeting.length() << std::endl;

    std::cout << "Access first char: " << greeting[0] << std::endl;

    for (char ch: name){
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    std::cout << name.substr(0,3) << std::endl;

    std::cout << (name.find("end") == std::string::npos) << std::endl;

    return 0;
}