#include <string>
#include <iostream>
#include <fstream>


int main(){
    if (0){
        std::cout << "enter your name:";

        std::string name;
        std::getline(std::cin, name);

        std::cout << "Hello " << name << "!" << std::endl; 

        // age
        std::cout << "enter your age:";

        int age;
        std::cin >> age;

        std::cout << "cool! You'are " << age << " years old" << std::endl;

        return 666;
    }

    if (0){
        std::ofstream outputFile("output.txt");
        if (outputFile.is_open()){
            std::cout << "Enter a line to write to the file (type 'exit' to stop):" << std::endl;
            std::string inputLine;
            while (true){
                std::getline(std::cin, inputLine);
                if (inputLine == "exit")
                    break;
                outputFile << inputLine << std::endl;
            }
            std::cout << "Data written to the file 'output.txt'." << std::endl;
            outputFile.close();
        }else{
            std::cerr << "Error opening the file for writing." << std::endl;
            return 1;
        }
    }

    if (1){
        std::ifstream inputFile("output.txt");
        if (inputFile.is_open()){
            std::cout << "Contents of the file 'output.txt':" << std::endl;
            std::string line;
            while(std::getline(inputFile, line)){
                std::cout << line << std::endl;
            }
            inputFile.close();
        }else{
            std::cerr << "Error opening the file for reading." << std::endl;
            return 1;
        }
    }

    return 0;
}