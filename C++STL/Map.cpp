#include<bits/stdc++.h>
using namespace std;
// stores elements as key and value pairs
// duplicate value are allowed but key has to be unique somewhat like set DS
// also the key can be of any data type
void explainMap(){
    // types of declaration
       //<key,value>
    map<int,int> mpp1;
    map<int, pair<int,int>>mpp2;
    map<pair<int,int>,int> mpp3;

    // types of initialisation of or filling up of a map

    mpp1[1]=2;
    mpp1.emplace(3,1);
    mpp1.insert({2,4}); //[{1,2},{2,4},{3,1}]

    mpp3[{2,3}]=10;
    // internal organisation:
    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }
    
    for(auto it:mpp1){  // traverse throughout the map and elements are sorted order of key not value
        cout << it.first << " "<< it.second <<endl;
    }
    cout<< mpp1[1]; //2
    cout<< mpp1[5]; //prints 0 or NULL

    auto it =mpp1.find(3);
    cout<< (*it).second;  //or use it->second. using * we get the element and using second we get value

    auto  it=mpp1.find(5); // returns mpp.end()

    auto it=mpp1.lower_bound(2);
    auto it=mpp1.upper_bound(3);

    // erase,swap,size,empty are same as others

}

void explainMultimap(){
    // everything same as map, only it can store multiple keys
    // also mpp[key] cannot be used here
}

void explainUnorderedMap(){
    // just like set and unordered set, we have map and unordered map
}

//in maps all operation require O(logn) time complexity
//in unordered map all operation reuire O(1) T.C. but may take O(n) in worst case

