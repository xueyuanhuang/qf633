// C++ program to illustrate the begin and end iterator
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	// Create a map of strings to integers
	map<string, int> mp;

	// Insert some values into the map using []
	mp["one"] = 1;
	mp["two"] = 2;
	mp["three"] = 3;
    mp["three"] = 4; //pay attention to this

    // Inserting using pair
    mp.insert(pair<string, int>("1", 40));
	mp.insert(pair<string, int>("2", 30));
	mp.insert(pair<string, int>("3", 60));
    mp.insert(pair<string, int>("3", 50)); // look out

    // Print the size of the map
    cout << "Size of map: " << mp.size() << endl;

	// Get an iterator pointing to the first element in the map
	map<string, int>::iterator it = mp.begin();

	// Iterate through the map and print the elements
	while (it != mp.end()) {
		cout << "Key: " << it->first << ", Value: " << it->second << endl;
		++it;
	}

    //assigning element from one map into another
    map<string, int> mp2(mp.begin(), mp.end());

    //removing element
    auto iter = mp2.begin();
    mp2.erase(mp2.begin(), ++iter); // remove all element up to key = "2"
    mp2.erase("3"); // remove by key
    
    // Iterate through the map and print the elements
    it = mp2.begin();
	while (it != mp2.end()) {
		cout << "Key: " << it->first << ", Value: " << it->second << endl;
		++it;
	}

    //find
    it = mp2.find("2");
    cout<<it->second <<endl;

	return 0;
}