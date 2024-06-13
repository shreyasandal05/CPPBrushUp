#include<bits/stdc++.h>
using namespace std;

/*STL(standard template library) is devided into 4 parts:
  1. Algorithms
  2. containers-consists of vector, queue,set,map
  3. Functions
  4. Iterations

first we discuss about containers:
*/



// Pairs

void explainPairs(){
    // pair<int,int> p={1,3};
    // cout<< p.first<<" "<<p.second;

    pair<int,pair<int,int>> p= {1,{3,4}};
    cout<<p.first<<" "<< p.second.first<<" "<< p.second .second;

    pair<int,int> arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[1].second;

}

int main(){
    explainPairs();
    return 0;
}
