#include<bits/stdc++.h>
using namespace std;

// this is not a linear data structure. internally tree data structure is maintained
/*this is basically max heap*/
void explainPQ(){
    priority_queue<int> pq;
    
    pq.push(5);  //{5}
    pq.push(2);  //{5,2}
    pq.push(8);  //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<< pq.top();  //prints the largest i.e 10

    pq.pop();  //removes 10

    cout<<pq.top(); // prints 8
 
    //size, swap,empty function are same as other

    /*this is basically min heap*/
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2);  //{2,5}
    pq.push(8);  //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<< pq.top();  //prints 2

}

// push-O(logn)
// top-O(1)
// pop-O(logn)