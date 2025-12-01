#include <bits/stdc++.h>
using namespace std;

// Alogorithms
// containers
// Fuctions
// iterators

// pairs
void eplainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second; // 4
}

// vectors 
void explainVector()
{
    vector<int> v;

    v.push_back(1);// {1}
    v.emplace_back(2);// {1,2} faster than push_back

    vector<pair<int, int>> vec; // vector of pairs
    v.push_back({1, 2});// { {1,2} }
    v.emplace_back(1, 2);// { {1,2} } faster than push_back

    vector<int> v(5, 100); // 5 element with value 100 

    vector<int> v(5); // 5 element with value 0

    vector<int> v1(5, 100);// {100,100,100,100,100}
    vector<int> v2(v1); // copy v1 in v2

    // iterators
    vector<int>::iterator it = v.begin();// it points to first element
    it++;
    cout << *(it) << " ";

    it = it + 2;// it points to 3rd index
    cout << *(it) << " ";
    vector<int>::iterator it = v.end();    // points to next of last element
    vector<int>::iterator it = v.rend();   // less use// points to before first element
    vector<int>::iterator it = v.rbegin(); // less use// points to last element

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    { // shoe=rt type
        cout << *(it) << " ";
    }
    for (auto it : v)/
    { // shoert type
        cout << it << " ";//
    }

    //{10,20,12,23}
    v.erase(v.begin() + 1); // 10,12,23

    // 10,20,12,23,35}
    v.erase(v.begin() + 2, v.begin() + 4); // 10,20

    // insert
    vector<int> v(2, 100);          //{100,100}
    v.insert(v.begin(), 300);       //{300,100,100}
    v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

    vector<int> copy(2, 50);                       //{50,50} // less use
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    // {10,20}
    cout << v.size() << " ";

    // v1->{10,20}
    // v2->{30,40}
    v1.swap(v2); // v1->{30,40} v2->{10,20}

    v.clear(); // size 0 erase all element

    cout << v.empty(); // 1 if empty
}

// list (doubly linked list)
void explainList()
{
    list<int> ls;
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}
    ls.push_front(5);   // {5,2,4}
    ls.emplace_front();// {5,2,4,1}
    {2, 4};
    // rest same as vector
    // insert,erase,clear,empty,size,swap
}

// dequeue (double ended queue)
void explainDequeue()
{
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(5); //{5,4,1,2}

    dq.pop_back();  // {5,4,1}
    dq.pop_front(); // {4,1}

    cout << dq.back() << " " << dq.front();// 4 1

    cout << dq.size();
    // rest same as vector
    // insert,erase,clear,empty,size,swap
}

// stack  (LIFO)
void explainStack()
{
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}

    cout << st.top(); // 3 print top element

    st.pop(); // {2,1}

    cout << st.size(); // 2

    cout << st.empty(); // 0

    stack<int> st1, st2;
    st1.swap(st2);
}

// queue (FIFO)
void explainQueue()
{
    queue<int> q;
    q.push(1);     // {1}
    q.push(2);     // {1,2}
    q.push(3);     // {1,2,3}
    q.back() += 5; // {1,2,8}// update last element

    cout << q.back() << " " << q.front(); // 8 1 print top element

    q.pop(); // {2,3}

    cout << q.size(); // 2

    cout << q.empty(); // 0

    queue<int> q1, q2;
    q1.swap(q2);
}

// priority_queue // max heap by default
void explainPriorityQueue()
{
    // max heap
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.push(1); // {8,5,2,1}

    cout << pq.top(); // 8

    pq.pop(); // {5,2,1}

    cout << pq.size(); // 3

    cout << pq.empty(); // 0

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(5); // {5}
    minheap.push(2); // {2,5}
    minheap.push(8); // {2,5,8}
    minheap.push(1); // {1,2,5,8

    cout << minheap.top();   // 1
    minheap.pop();           // {2,5,8}
    cout << minheap.size();  // 3
    cout << minheap.empty(); // 0
    // swap not work in pq
}

// set 1. sorted order 2. unique element
void explainSet()
{
    set<int> s;
    s.insert(1);  // {1}
    s.emplace(2); // {1,2}// faster than insert
    s.insert(2);  // {1,2}
    s.insert(4);  // {1,2,4}
    s.insert(3);  // {1,2,3,4}

    // s.erase(s.begin()); // {2,3,4}
    int cnt = s.erase(3); // erase 3 // 0 if element not found

    cout << s.size(); // 2

    cout << s.count(4); // 1  , 0 if not present

    auto it = s.find(4); // it points to 4 , if not found it = s.end() //givse iterator value
    auto it = s.find(3);// it = s.end()
    st.erase(it); // {2,4}// erase element at it

    auto it1 = s.find(5);
    auto it2 = s.find(7);
    st.erase(it1, it2); // erase in range [it1,it2)

    for (auto it : s)
    {
        cout << it << " "; // 2 4
    }

    auto it = st.lower_bound(2); // it points to 2 , if not found greater than 2
    auto it = st.upper_bound(2); // it points to greater than 2

    set<int> s1, s2;
    s1.swap(s2);

    s.clear(); // delete all element
}

// multiset 1. sorted order 2. non unique element
void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);  // {1}
    ms.emplace(2); // {1,2}
    ms.insert(2);  // {1,2,2}
    ms.insert(4);  // {1,2,2,4}
    ms.insert(3);  // {1,2,2,3,4}

    ms.erase(2);                      // {1,3,4} erase all 2
    ms.erase(ms.find(2));             // erase only one 2
    int cnt = ms.erase(3);            // erase 3 // 0 if element not found
    int cnt = ms.count(2);            // 2
    ms.erase(ms.find(2), ms.find(4)); // erase in range [2,4) one 2 will be left

    // rest same as set
}

// unordered set 1. not in sorted order 2. unique element
void explainUnorderedSet()
{
    unordered_set<int> s;
    // same as set;
    // except lower_bound,upper_bound,find,erase(it,it)
    // O(n) once in blue mooon;
}




//    map 1. sorted order 2. unique key value
void explainMap()
{
    map<int, int> m;
    // store in key value pair in any data type
    // mapstore unique key value pair in sorted order

    map<int, pair<int, int>> m;

    map<pair<int, int>, int> m;
    m[1] = 2;             // {1,2}
    m.emplace({3, 4}, 5); // {{3,4},5}
    m[1] = 3;             // {1,3} update value of key 1
    m.insert({2, 3});     // {1,3},{2,3}
    m.insert({2, 4});     // not inserted as key 2 already present
    
    m[{5, 6}]=7;       // {{5,6},7}

    for(auto it:m){
    cout<<it.first<<" "<<it.second<<endl;//
    }
    cout << m[1]; // 3
    cout << m[5]; // 0 as 5 not present

    auto it = m.find(3); // it points to {3,4}, if not found it = m.end()
    cout << *it.second;// 4

    auto it = m.find(5); // it = m.end()
     auto it= m.lower_bound(2); // it points to {2,3} , if not found greater than
    auto it= m.upper_bound(2); // it points to greater than {2,3}
    // rest same as set


}

//multimap 1. sorted order 2. non unique key value
void explainMultiMap()
{
    multimap<int, int> m;
    // store in key value pair in any data type
    // mapstore non unique key value pair in sorted order

}




//unoredered map 1. not in sorted order 2. unique key valuevoid
void explainUnorderedMap()
{
    unordered_map<int, int> m;
    // same as map;
    // except lower_bound,upper_bound,find,erase(it,it)
    // O(n) once in blue mooon;
}

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    return p1.second<p2.second;
}

void explainExtra(){
    sort(a,a+n);// increasing order
    sort(v.begin(),v.end());// increasing order
    sort(a+2,a+4);// sort in range [2,4)
    sort(v.begin()+2,v.begin()+4);
    sort(a,a+n,greater<int>()); // decreasing order
    pair<int,int> a[]={{1,2},{3,4},{5,6}};

    //sort according to second element
    //if second same then according to first element
    //it according to first element but in decreasing order
    sort(a,a+n,comp);
    // {1,2},{3,4},{5,6}

    int num =7;
    int cnt = __builtin_popcount(num); // no of set bit in num

    long long num = 7978863286832;
     it cnt = __builtin_popcountll(num); 
    // no of set bit in num

string s="123"
sort(s.begin(),s.end()); // lexographical order
do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));
// print all permutation in sorted order



int max= *max_element(a,a+n);


}