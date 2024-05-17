#include <iostream>
#include <vector>

template<class ForwardIterator>
void dispaly(ForwardIterator first, ForwardIterator last){
    while(first!=last){
        std::cout << *first << "\t";
        ++first;
    }
}

int main(){
    if(0){
        std::vector<int> v{1,2,3};
        for(std::vector<int>::iterator it = v.begin(); it!=v.end(); ++it){
            std::cout << *it << std::endl;
        }
    }

    if(0){
        std::vector<int> numbers = {1,2,3,4,5};
        std::ostream_iterator<int> outputIterator(std::cout, " ");

        for(const int& ele:numbers){
            *outputIterator = ele;
            ++outputIterator;
        }

        std::cout << std::endl;
    }

    if(1){
        std::vector<int> a;
        for(int i = 1; i < 10; ++i){
            a.push_back(i);
        }
        dispaly(a.begin(), a.end());
    }

    return 0;
}