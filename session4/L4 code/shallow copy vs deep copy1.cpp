#include <iostream>

class ShallowCopy{
private:
    int* data;
public:
    ShallowCopy(int val){
        std::cout << "construtor" << std::endl;
        data = new int(val);
    }
    ShallowCopy(const ShallowCopy& other):data(other.data){
        std::cout << "shallow copy constructor" << std::endl;
    }

    ShallowCopy& operator=(const ShallowCopy& other){
        std::cout << "shallow copy assignment operator" << std::endl;
        if(this != &other){
            delete data;
            data = other.data;
        }
        return *this;
    }

    inline void setData(int val) const{*data = val;};
    inline int getData()const{return *data;};

    ~ShallowCopy(){
        delete data;
    }
};

class DeepCopy{
private:
    int* data;
public:
    DeepCopy(int val){
        data = new int(val);
    }

    DeepCopy(const DeepCopy& other):data(new int(*(other.data))){}

    DeepCopy& operator=(const DeepCopy& other){
    // void operator=(const DeepCopy& other){
        std::cout << "assignment operator" << std::endl;
        if(this != &other){
            delete data;
            data = new int(*(other.data));
        }
        return *this;
    }

    inline void setData(int val) const{*data = val;};
    inline int getData() const{return *data;};

    ~DeepCopy(){
        delete data;
    }
};

int main(){
    if(0){
        auto s = ShallowCopy(10);
        auto s2(s);
        auto s3 = ShallowCopy(15);
        auto s4 = ShallowCopy(666);

        s = s3 = s4;

        std::cout << s.getData() << std::endl;
        std::cout << s2.getData() << std::endl;
        std::cout << s3.getData() << std::endl;
        std::cout << s4.getData() << std::endl;
    }

    if(1){
        auto s = DeepCopy(250);
        auto s2(s);
        auto s3 = DeepCopy(350);
        s = s2 = s3;
        

        std::cout << s.getData() << std::endl;
        std::cout << s2.getData() << std::endl;
        std::cout << s3.getData() << std::endl;
    }
    

    return 0;
}
