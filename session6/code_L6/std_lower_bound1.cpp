#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v{10, 20, 30, 40, 40, 40, 55};

    std::vector<int>::iterator low1, low2, low3;

    low1 = std::lower_bound(v.begin(), v.end(), 30);
    low2 = std::lower_bound(v.begin(), v.end(), 40);
    low3 = std::lower_bound(v.begin(), v.end(), 60);

    std::cout << low1 - v.begin() << "\t" << low2 - v.begin() << "\t" << low3 - v.begin() << "\n";

    return 0;
}