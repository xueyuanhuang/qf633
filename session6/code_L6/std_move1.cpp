#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <utility>

int main(){
    if(0){
        std::string str = "salute";
        std::vector<std::string> v;
        // v.push_back(str);
        v.push_back(std::move(str));
        std::cout << std::quoted(str) << std::endl;
    }

    if(0){
        std::vector <int> vec1 {1, 2, 3, 4, 5}; 
		std::vector <int> vec2 {7, 7, 7, 7, 7};

        std::move(vec1.begin(), vec1.begin()+4, vec2.begin()+1);
        for(int i = 0; i < vec1.size(); ++i){
            std::cout << vec1[i] << "\t";
        }
        std::cout << "\n";

        for(int i = 0; i < vec2.size(); ++i){
            std::cout << vec2[i] << "\t";
        }
        std::cout << "\n";
    }

    if(1){
        std::vector <std::string> vec1 {"1", "1", "1", "1", "1"}; 
		std::vector <std::string> vec2 {"7", "7", "7", "7", "7"};

        std::move(vec1.begin(), vec1.begin()+4, vec2.begin()+1);
        for(int i = 0; i < vec1.size(); ++i){
            std::cout << vec1[i] << "\t";
        }
        std::cout << "\n";

        for(int i = 0; i < vec2.size(); ++i){
            std::cout << vec2[i] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}