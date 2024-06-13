# vectors vs list

* vectors uses insert operation which takes a lot of time i.e it is a costly operation

* while in case of list internal operation is a doubly linked list 
and for vectors singly linked list is maintained

* hence, `push_front()` [used by list] is very very cheap as compared to `insert()`[used by vector] in terms of time complexity

* rest functions are same as vector i.e. begin,end,rbegin,rend,clear,insert,size,swap