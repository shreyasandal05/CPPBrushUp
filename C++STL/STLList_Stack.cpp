#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4);  //{2,4}

    ls.push_front(5);  //{5,2,4}

    ls.emplace_front();  //{2,4}
}

/* stacks*/

void explainStack(){
    stack<int> st;
    st.push(1);  //{1}
    st.push(2);   //{2,1}
    st.push(3);   //{3,2,1}
    st.push(3);  //{3,3,2,1}
    st.emplace(5);  //{5,3,3,2,1}  emplace similar to push

    cout<< st.top();  //prints 5
    /* indexing accessing is not allowed i.e. st[2] is invalid*/

    st.pop();   //{3,3,2,1}

    cout<< st.size(); //4

    cout<< st.empty();  //false

    stack<int> st1,st2;
    st1.swap(st2);
}

// time complexity: all operations are O(1) i.e. takes constant time