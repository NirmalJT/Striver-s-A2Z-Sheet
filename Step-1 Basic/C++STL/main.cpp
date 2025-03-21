// The Standard Template Library (STL) in C++ is a collection of predefined classes and functions that provide powerful data structures and algorithms. STL helps in efficient coding by offering reusable and optimized implementations of commonly used operations.
// c++ stl is divided into 4 parts
// Algorithms
// Containers
// Funtions
// iterators

#include <bits/stdc++.h>
using namespace std;
// pair lies in the utility library

void hello()
{
    cout << "Nirmal Jyoti Thakuria";
}
int sum(int a, int b)
{

    return a + b;
}

void explainPair()
{
    pair<int, int> p = {3, 4};
    cout << p.first;
    cout << endl;
    cout << p.second;
    cout << endl;
    pair<int, pair<int, int>> num = {9, {2, 6}};
    cout << num.first << " " << num.second.first << " " << num.second.second;
    pair<int, int> arr[] = {{1, 2}, {3, 5}, {5, 7}};
    cout << endl;
    cout << arr[1].first << " " << arr[3].second;
}
//* Container & Iterators

void explainVector()
// Arrays are constant in size we cannot modify the size of array
// vectors are containers which is dynamic in size we can modify the size
{
    vector<int> v;
    // emplace_back is faster than push_back
    // add element in a vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(12);
    v.emplace_back(23);
    v.emplace_back(33);

    // creating a vector of a pair datatype
    vector<pair<int, int>> vec;
    // inserting pair in vector
    vec.push_back({1, 4});
    vec.emplace_back(2, 7);
    vector<int> v2(5, 100);
    vector<int> v3(5);
    vector<int> v4(5, 20);
    vector<int> v5(v2); // a copy of v2
    // how to access elements in vector
    // simple way
    cout << v[0] << " " << v.at(0) << endl;
    // using itrerator
    vector<int>::iterator it = v.begin();
    // iterator will point to the memory location of the element not to the element
    //  int iterator it v.begin() will point to the memory address of the fist element of the vector so we need accecse it by *(it)
    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << endl;
    vector<int>::iterator itt = v.end(); // it will point right after the last element
    // vector<int>::iterator it=v.rend(); //Reverse End
    // vector<int>::iterator it=v.rbegin(); // Reverse Begin
    cout << v2.back() << endl; // last element of a vector

    // using for loop
    cout << "Using loop : ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    // shortcut of vector<int>::iterator datatype "auto" automatically defined the datatype
    cout << "-:- using loop (auto) ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // using forEach loop (not using iterator)

    cout << "-:-using foreach loop ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    // deletion of vector element
    //{10,20,12,23,30} // original
    v.erase(v.begin() + 1);                //{10,12,23,33}
    v.erase(v.begin() + 1, v.begin() + 3); //{10,30} {start,end}
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    // insertion funtion
    vector<int> vec1(2, 200);                            //{100,100}
    vec1.insert(vec1.begin(), 300);                      //{300,100,100}
    vec1.insert(vec1.begin() + 1, 2, 20);                //{300,20,20,100,100}
    vector<int> copy(2, 50);                             //{50,50}
    vec1.insert(vec1.begin(), copy.begin(), copy.end()); //{50,50,300,20,20,100,100}
    for (auto it : vec1)
    {
        cout << it << " ";
    }
    // size of a vector
    cout << vec1.size() << " ";
    // deleting element from the end of the vector
    vec1.pop_back();
    cout << vec1.size() << " ";
    // for erasing entire vector
    vec1.clear();
    // for checking vector is emty or not
    cout << vec1.empty(); // return 1 if true and if false return 0
    // for swaping two vector with each other
    // v2={1,2}
    // v4={3,4}
    v2.swap(v4); // v4={3,4},v2{1,2}
}

void explainList()
{
    // list is exactly similar like vector it can be modified but the only difference is it also has front operations .list uses doubly linklist for its internal operation
    // in vector we need to use insert operation which takes lots of time(costlier) cause it uses singly linklist for its internal operation
    list<int> ls;
    ls.push_back(2);      //{2}
    ls.emplace_back(3);   //{2,3}
    ls.push_front(33);    //{33,2,3} //front operation in list is very cheap
    ls.emplace_front(43); //{43,33,2,3}
    // rest funtion same as vector
    // begin ,end , rbegin ,rend , size , emty , clear , swap
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(2);     //{2}
    dq.emplace_back(3);  //{2,3}
    dq.push_front(4);    //{4,2,3}
    dq.emplace_front(5); //{5,4,2,3}
    dq.pop_back();       //{4,2,3}
    dq.pop_front();      //{2,3}
    dq.back();
    dq.front();
    // rest funtion same as vector
    //  begin ,end , rbegin ,rend , size , emty , clear , swap
}

void explainStack()
{
    // stack container is based on LIFO principle which is Last in first out
    // it has majorly 3 funtion push(), pop() and top()

    // in stack every push(), pop() and top() is O(1) time complexity
    stack<int> st;
    st.push(1);                //{1}
    st.push(2);                //{2,1}
    st.push(3);                //{3,2,1}
    st.push(3);                //{3,3,2,1}
    st.emplace(4);             //{4,3,3,2,1}
    cout << st.top() << " ";   // print 4 "*st[2] is invalid*"
    st.pop();                  // st looks like {3,3,2,1}
    cout << st.top() << " ";   // it will print 3
    cout << st.size() << " ";  // it will print 4
    cout << st.empty() << " "; // it will print false 0 if it tru then it will print 1

    stack<int> st1, st2;
    st1.swap(st2); // it will swap both the stack
}

void explainQueue()
{
    // queue container is based on FIFO principle which is First in First out
    // in queue every push() , pop() , front() operation is O(1) time complexity
    queue<int> q;
    q.push(1);                //{1}
    q.push(2);                //{1,2}
    q.push(3);                //{1,2,3}
    q.emplace(4);             //{1,2,3,4}
    q.back() += 5;            //{1,2,3,9}
    cout << q.back() << " ";  // it will print 9
    cout << q.front() << " "; // it will print 1
    q.pop();                  //{2,3,9}
    cout << q.front();        // it will print 2
    // size swap empty same as stack
}
void explainPriority_Queue()
{
}
int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    explainQueue();
    explainPriority_Queue();

    return 0;
}