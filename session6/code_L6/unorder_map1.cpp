#include <iostream>
#include <unordered_map>

int main(){
    std::unordered_map<std::string, int> umap;

    umap["def"] = 456;
    umap["abc"] = 123;
    umap["cde"] = 666;

    umap.emplace(std::pair<std::string, int>("new", 250));

    for(const auto& x:umap){
        std::cout << x.first << "\t" <<x.second << std::endl;
    }

    // auto it = umap.find("def");
    auto it = umap.find("hhhh");
    // std::cout << it->second << std::endl;
    if(it == umap.end()){
        std::cout << &(it->second) << std::endl;
    }

    umap.clear();
    std::cout << umap.size() << std::endl;
    


    return 0;
}