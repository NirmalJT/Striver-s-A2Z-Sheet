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
    // in priority_queue the larger element will be in the top and the lowest will be in starting
    // it is called maximum heap where every larger element will be in the top
    priority_queue<int> pq;
    pq.push(1);              //{1 }
    pq.push(4);              //{4,1 }
    pq.push(7);              //{7,4,1 }
    pq.push(2);              //{7,4,2,1 }
    pq.emplace(10);          //{10,7,4,2,1}
    cout << pq.top() << " "; // print 10
    pq.pop();                //{7,4,2,1}
    cout << pq.top() << " "; // print 7
    // Size swap emty funtions are same as others
    // Minimum Heap where every small element is in the top
    // for minimum heap we need to give vector and greater as datatype
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(2);              //{2}
    pq1.push(5);              //{2,5}
    pq1.push(7);              //{2,5,7}
    pq1.emplace(4);           //{2,4,5,7}
    cout << pq1.top() << " "; // print 2
    pq1.pop();                //{4,5,7}
    cout << pq1.top() << " "; // print 4
    // time complexity for push(),and pop() is log(n)
    // for top() it is O(1)
}
void explainSet()
{
    // set container stores everything in a shortet order and unique if same element is added it will be not added
    // tree is maintain in it
    set<int> st;
    st.insert(5);  //{5}
    st.insert(4);  //{4,5}
    st.insert(7);  //{4,5,7}
    st.insert(8);  //{4,5,7,8}
    st.emplace(8); //{4,5,7,8}
    st.emplace(9); //{4,5,7,8,9}
    // begin() end() rbegin() rend() swap() empty() size() are same as others
    // {4,5,7,8,9}
    auto it = st.find(4); // it will return a itrator
    cout << *(it) << " ";
    //{4,5,7,8,9}
    // auto it = st.find(10); // it will return st.end()
    st.erase(5);           //{4,7,8,9} //erase 5 it takes log(n) time complexity
    int cnt = st.count(4); // if 4 exist it will return true(1) if it does not exist it willl return 0 as false
    cout << cnt;

    auto it1 = st.find(4);
    st.erase(it1); // we can pass a itrator as well it takes constant time
    cout << st.size() << " ";
    set<int> st1;
    st1.insert(1); //{1}
    st1.insert(2); //{1,2}
    st1.insert(3); //{1,2,3}
    st1.insert(4); //{1,2,3,4}
    st1.insert(5); //{1,2,3,4,5}

    auto it2 = st1.find(2);
    auto it3 = st1.find(4);
    st1.erase(it2, it3); // after erase {1,4,5} [first,last]
    cout << st1.size();
    // lower_bound() and upper_bound() funtions are workds in a same as in vectctor does
    // syntax
    auto it5 = st.lower_bound(2);
    auto it6 = st.upper_bound(4);

    // in set evertyhing happens in logarithimic time complexity log(n)
}

void explainMultiSet()
{
    // everthing same sa set the only diffences as it also stores  duplicate elements  it stored every element in sorted manner and it also stored duplicate values
    multiset<int> ms;
    ms.insert(1);  //{1}
    ms.insert(1);  //{1,1}
    ms.insert(1);  //{1,1,1}
    ms.insert(1);  //{1,1,1,1}
    ms.insert(2);  //{1,1,1,1,2}
    ms.insert(2);  //{1,1,1,1,2,2,}
    ms.insert(2);  //{1,1,1,1,2,2,2,}
    ms.emplace(2); //{1,1,1,1,2,2,2,2,}
    ms.emplace(2); //{1,1,1,1,2,2,2,2,2,}
    ms.insert(1);  //{1,1,1,1,1,2,2,2,2,2,}

    ms.erase(1);          //{2,2,2,2,2} // it will delete all 1's
    cout << ms.count(2);  // print 5 // count all 2,s
    ms.erase(ms.find(2)); // only single two is erased
    // ms.erase(ms.find(2), (ms.find(2) + 2)); it will delete the element that start from first and to the 2nd last;
    // rest runtions are same as set

    for (auto it : ms)
    {
        cout << it << " ";
    }
}

void explainUnorderdSet()
{
    // everthing is same as set the only diffence is it stored all the element in unordered manner and it takes unique value same as set
    // timecomplexit is O(1)
    unordered_set<int> us;
    // lower_bound and upper_bound deos not works , rest all funtions are same
    // as above it does not stores in any particluar order it has a better complexity
    us.insert(1);
    us.insert(5);
    us.insert(6);
    us.insert(4);
    us.insert(6);
    us.insert(3);
    for (auto it : us)
    {
        cout << it << " ";
    }

    // in the worst case is O(n)
}
void explainMap()
{
    // map is a container that stores everything in respect of keys and values.
    // - The key should be unique. and it will storein shorted orderr
    // - The key can be any datatype, and the value can also be anything (int, double, pair, etc.).

    map<int, int> mp; // First datatype is for key, second one is for value.
    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;

    // Inserting values into the map
    mp[1] = 2;        // 1 is key, 2 is value -> [1,2]
    mp.emplace(4, 5); // 4 is key, 5 is value -> [1,2], [4,5]

    mp.insert({2, 4}); // Corrected syntax -> [1,2], [2,4], [4,5]
    // Map stores unique keys in sorted order.

    mp2[{1, 2}] = 10; // Key is a pair {1,2}, value is 10

    // Iterating and printing the map
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mp[1] << " "; // print the value 2
    cout << mp[6] << " "; // print 0 cause there is no such key
    auto it2 = mp.find(2);
    cout << it2->second << " ";
    auto it3 = mp.find(6); // point to the mp.end()
    auto it_lb = mp.lower_bound(1);
    cout << it_lb->first << " ";
    auto it_ub = mp.upper_bound(2);
    cout << it_ub->second << " ";
    // erase swap size empty are same as ABOVE
}
void explainMultiMap()
{
    // everthing same as map only it can store multiplle same keys
    // only mmp[key] can not be used
    // can store duplicate keys but everthing is in sorted order
}

void explainUnorderedMap()
{
    // same as set and unordered_set()
    // unique keys and unordered
    // timecomplexity O(1) for worst case O(n)
    // timecomplexity for map is log(n);
}
/// Algorithm
// comparision funtion for sort algorithm for making custom order sort
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }
    if (p1.first > p2.first)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void explainExtra()
{
    vector<int> a;
    int Array[10] = {9, 77, 88, 33, 44, 11, 8, 3, 1};
    a.push_back(4);
    a.push_back(17);
    a.push_back(34);
    a.push_back(55);
    a.push_back(77);
    a.push_back(99);
    // sorting element using sort mehtod
    // for shorting in ascending order
    sort(a.begin(), a.end());
    sort(Array, Array + 10);
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (int b : Array)
    {
        cout << b << " ";
    }
    // for shorting in descending order

    sort(Array, Array + 10, greater<int>());
    cout << endl;
    for (int b : Array)
    {
        cout << b << " ";
    }
    // for custom order sorting
    // sort it according to 2nd element
    // if second element is same then sort
    // it according to first element but in descending order
    pair<int, int> b[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(b, b + 3, comp);
    cout << endl;
    for (auto p : b)
    {
        cout << p.first << " " << p.second << "   ";
    }
    cout << endl;
    int num = 7;
    // __builtin_popcount(num) returns the number of set bits (1s) in the binary representation of 'num'
    int cnt = __builtin_popcount(num);
    cout << cnt << " " << endl; // Output: 3 (because 7 in binary is 111)

    long long num2 = 8273537226737833663;
    // __builtin_popcountll(num2) does the same as __builtin_popcount but for long long integers
    int cnt2 = __builtin_popcountll(num2);
    cout << cnt2 << " " << endl; // Outputs the number of 1s in the binary representation of num2

    string s = "123";
    // next_permutation generates the next lexicographical permutation of a sequence
    do
    {
        cout << s << " " << endl; // Prints all possible permutations of the string "123"
    } while (next_permutation(s.begin(), s.end()));
    // The loop runs until all permutations are exhausted

    int Array[10] = {10, 20, 5, 7, 30, 15, 50, 40, 35, 25}; // Example array
    // max_element returns an iterator pointing to the maximum element in the given range
    int max_val = *max_element(Array, Array + 10);
    cout << max_val << endl; // Outputs the maximum value in the array
}

int main()
{
    ;
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriority_Queue();
    // explainSet();
    // explainMultiSet();
    // explainUnorderdSet();
    // explainMap();
    // explainMultimap();
    // explainUnorderedMap();

    explainExtra();

    return 0;
}