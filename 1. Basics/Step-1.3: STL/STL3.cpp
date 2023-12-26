//Contents:
// Map 
// MultiMap
// Unordered Map

#include <iostream>
#include <map>              //for map and multimap
#include <unordered_map>    //for unordered map
using namespace std;

void explainMap() {
    //sorted and unique keys
    //Time Complexity is O(logN) for all operations
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(2, 3);
    mpp.insert({3, 4});
    mpp.insert({3, 5}); //gets ignored and the previous value with key 3 is retained

    //iteration
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
}

void explainMultiMap() {
    //sorted but not unique keys
    multimap<int, int> mpp;
    mpp.insert({2, 3});
    mpp.insert({2, 4});

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
}

void explainUnorderedMap() {
    //keys are unique but not sorted
    //Time Complexity for operations is O(1)
    //Worst case O(N) -> rare case
    unordered_map<int, int> ump;
    ump[2] = 3;
    ump.insert({3, 4});
    ump.insert({4, 5});

    for(auto it: ump) {
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    
    //explainMap();
	//explainMultiMap();
    explainUnorderedMap();

    return 0;
}
