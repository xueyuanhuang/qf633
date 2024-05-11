#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << numbers[1] << std::endl;
    std::cout << numbers.size() << std::endl;

    numbers.push_back(666);
    numbers.push_back(111);
    numbers.pop_back();

    numbers[1] = 250;
    for (int num : numbers){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int target = 87;
    auto it = std::find(numbers.begin(), numbers.end(), target);
    std::cout << std::distance(numbers.begin(),it) << std::endl;

    return 0;
}