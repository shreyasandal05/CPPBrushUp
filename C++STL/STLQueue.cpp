#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1);  //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back()+=5;  //back here is 4 i.e 4+5=9

    cout<<q.back();  //prints 9

    cout<<q.front();  //prints 1

    q.pop(); // deletes 1st element

    cout<<q.front();  // prints 2

    // size,swap,empty same as stack
}

 