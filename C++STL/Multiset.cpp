#include<bits/stdc++.h>
using namespace std;

void explainMultiset(){
    // everything is same as set
    // stores duplicate element also

    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);// all 1's erased

    int c= ms.count(1);

    ms.erase(ms.find(1));

    ms.erase(ms.find(1),next(ms.find(1),2));

    // OR

    auto it=ms.find(1);
    advance(it,2);  //iterator is one position ahead of where you want it to be
    //next and advanced are quite similar

    ms.erase(ms.find(1),it);

    // ms=ms.(find(1)+2);  // doing this will give error because only array, vector, and string 
    // can store elements in contiguous memory locations, so we can't do +2 and access the element 
    // after the first occurrence of 1.

    // rest all functions are same as set
}