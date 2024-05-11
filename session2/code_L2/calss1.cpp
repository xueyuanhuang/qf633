#include <iostream>
#include <string>

class IsRelationship{
public:
    std::string name1;
    std::string name2;
    bool isRelationship;

    void predict(){
        if (name1 == "hannah"){
            isRelationship = true;
        }else{
            isRelationship = false;
        }
    }

    void displayStatus(){
        if (isRelationship){
            std::cout << name1 << " and " << name2 << " are couples" << std::endl;
        }else{
            std::cout << name1 << " and " << name2 << " just sister and brother" << std::endl;
        }
        
    }
};

int main(){
    IsRelationship dentonAndHannah;
    dentonAndHannah.name1 = "denton";
    dentonAndHannah.name2 = "hannah";

    dentonAndHannah.predict();
    dentonAndHannah.displayStatus();

    std::cout << "how about we change their name's position????" << std::endl;

    dentonAndHannah.name1 = "hannah";
    dentonAndHannah.name2 = "denton";
    dentonAndHannah.predict();
    dentonAndHannah.displayStatus();
}