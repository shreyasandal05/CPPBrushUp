#include<bits/stdc++.h>
using namespace std;
/*it stores element in sorted order and stores unique elements */
// internally it operates like a tree data structure

void explainSet(){
    set<int> st;

    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //functionality of insert in vector can be used also,
    // that only increases efficiency

    // begin(),end(), rbegin(), rend(), size(),
    // empty(), and swaps are same as those of above

    // {1,2,3,4,5}
    auto it=st.find(3); // returns an iterator which points to 3
    // iterator+something that points to address

    // {1,2,3,4,5}
    auto it=st.find(6); //if element not in the set then returns set.end() i.e. points to address just after end

    // {1,4,5}
    st.erase(5); //erases 5 and maintains the sorted order // takes logarithmic time

    int c=st.count(1);  // if the element exist then it counts it's 
                        // one occurence and returns 1 (bcz it's unique) otherwise 0
// we can two things i.e: 1. erase(element) 2. erase(iterator)

    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);  //it'll delete 2 and 3 and not 4 //similar to vector function erase(start,end)

    // lower_bound and upper_bound functions works in the same way as it does in vector

    // syntax
    auto it=st.lower_bound(2);
    auto it=st.upper_bound(3);

    // here everything happens in logarithmic time complexity i.e. insert, erase,etc.
}