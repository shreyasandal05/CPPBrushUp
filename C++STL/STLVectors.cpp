#include<bits/stdc++.h>
using namespace std;

// Vectors: stores elements of similar datatype as array except that it is dynamic in nature

void explainVector(){
  // vector<int> v;   // creates an empty container

  // v.push_back(1);  //inserts first element
  // v.emplace_back(2);  // dynamically increases it's size and inserts next element to the vector
  // // emplace_back() is faster than push_back()

  // vector<pair<int,int>> vec;
  // vec.push_back({1,2});
  // vec.emplace_back(1,2); //here emplace_back() automatically assumes (1,2) as pair

  vector<int> v(5,100); // it will create a vector of size 5 and assign 5 instances of 100 to it

  // vector<int> v(5);  //here 5 instances of '0' or any garbage value is assigned 
                     // depending on compiler. even after doing v(5) we can assign more values
                    //  by simply using push_back() i.e. {100,100,100,100,100,1}

  // vector<int> v1(v); // copy of vector v={100,100,100,100,100}


  // Accessing elements in a vector

  /*best way of accessing is similar to array i.e. v[1] */
   
  // iterators

  // vector<int>::iterator it= v.begin();  //begin() points to the very first element

  // it++;
  // cout<<*(it)<<" ";  // o/p=100 for v={100,100,100,100,100}

  // it=it+2;
  // cout<<*(it)<<" ";   //  o/p=100  for v={100,100,100,100,100}

  // v={10,20,30,40}
  // vector<int>::iterator it=v.end();  //points to ths address after the last element(after 40). to access it we need to i--
  // auto it=v.rend();  //reverse the vector(v={40,30,20,10}), then point to the end of it(adress before the first element i.e. 40). to access its elements we need to i++
//   auto it=v.rbegin();  ///reverse the vector(v={40,30,20,10}), then point to the begin of it. to access its elements we need to i--

  cout<<v[0]<<" "<<v.at(0);
  cout<<v.back()<<" ";  //v={10,20,30}  it prints 30(element at arr[2])

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //auto-automatically assigns data type, here vector iterator 
    // eg: int a= 5; ->  auto a = 5; automatically assumes a as integer

    for(auto it=v.begin();it!=v.end();it++){   
    }

    // another way to print all elements is 'for each loop'
    //let v={10,20,30}
          // |   |  |  ->one by one point to each element then print it

  for(auto it:v){  // this 'auto' indicates int
    cout<< it << " ";
  }

   // Deleting a vector

// (10,20,30,40) 
  v.erase(v.begin()+1);  // begin()+ 1 means 20 i.e vector will be reshuffled and output will be (10,30,40)

//{10,20,12,23,35}
  v.erase(v.begin()+2,v.begin()+4);   //{10,20,35}  [start,end)

// Insert function

vector<int> v(2,100);  // {100,100}
v.insert(v.begin(), 300);  // {300,100,100}
v.insert(v.begin()+1,2,10);  // {300,10,10,100,100}


/*Not much required*/
vector<int> copy(2,50);   //{50,50}
v.insert(v.begin(),copy.begin(),copy.end());  //{50,50,300,10,10,100,100}
                //  <---------------------> pls enter the entire vector

// {10,20}
cout<<v.size(); //2  :returns size of vector

// {10,20}
v.pop_back();  //{10} : pops out the last element

// v1->{10,20}
// v2->{30,40}
// v1.swa p(v2);  // v1->{30,40} ,v2->{10,20}

v.clear();   // erases the entire vector

cout<<v.empty();  // if empty:returns true,else false

}

// All C++ programs must have a main function. If you try to 
// compile a C++ program without a main function, the compiler raises an error.
int main(){
    explainVector();
    return 0;
}