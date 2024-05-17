// C++ program to demonstrate functionality of unordered_map 
#include <iostream> 
#include <unordered_map> 
using namespace std; 

// Driver code 
int main() 
{ 
	// Declaring umap to be of <string, int> type key 
	// will be of STRING type and mapped VALUE will be of int type 
	unordered_map<string, int> umap; 

	// inserting values by using [] operator 
	umap["GeeksforGeeks"] = 10; 
	umap["Practice"] = 20; 
	umap["Contribute"] = 30; 
	// insert2
	umap.emplace(pair<string, int>("newKey", 25));

	//insert3
	umap.insert(pair<string, int>("newKey2", 15));

	// Traversing an unordered map 
	for (auto x : umap) 
		cout << x.first << " " << x.second << endl; 

	//find
    auto it = umap.find("Practice");
    cout<<it->second <<endl;
	// cannot find
	auto iter = umap.find("test");
	if (iter == umap.end())
    	cout<<&(iter->first) <<endl;

	umap.clear();

	cout << "Size of map: " <<umap.size()<< endl; 
}
