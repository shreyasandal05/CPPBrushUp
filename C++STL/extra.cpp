#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){  //think in terms of pair
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    
    if(p1.first>p2.first) return true;
    return false; //swap internally
}

void explainExtra(){

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    //acsending order
    sort(a, a+n);  //[start,end)
    sort(v.begin(),v.end());

    //decsending order
    sort(a+2,a+4); //specific range of elements will get sorted
    sort(a,a+n,greater<int>);

    //random order:
    //e.g: sort it according to second element if second element is same, 
    // then sort it according to first element but in decesnding order

    sort(a,a+n,comp);  //comp- self written comparator
    //{4,1},{2,1},{1,2}

    int num =7;
    int c=__builtin_popcount(num);  //counts the no. of set bits or the no. of 1's (in binary)

    long long num=165786578687;
    int c=__builtin_popcountll(num); //same as above 

    string s= "123";

    do{
        cout<< s << endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n);
    //permuation is printed according to dictionary order i.e.
    // s=123
    // s=132
    // s=213
    // s=231
    // s=312
    // s=321
    // null
// if we have 213 then
    // 213
    // 231
    // 312
    // 321
// therefore always start by sorting the nos.


}