#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;
// STL -> Standar Template Libraries
// Pre-defined templates in terms of containers and classes
// Implemet data structures without having to write complete code and worry about about time-space complexities
// 1. Algorithms
// 2. Contianers
// 3. Functions
// 4. Iterators

void explain_pairs()
{ // single pair
  pair<int, int> p = {1, 3};
  cout << "Pair's 1st -> " << p.first << endl
       << "Pair's 2nd-> " << p.second << endl;

  // nested pair
  pair<int, pair<int, int>> nested_pair = {1, {2, 3}};
  cout << "First pair's 1st ->" << nested_pair.first << endl
       << "Nested pairs : first->" << nested_pair.second.first << endl
       << "Nested pairs : second ->" << nested_pair.second.second << endl;

  // array of pairs
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
  cout << "Index 0:First pair's first->" << arr[0].first << endl
       << "Index 2: Third's pair second->" << arr[2].second << endl;
}

void explore_vectors()
{
  // exploring vectors: used to overcome the fixed size of arrays
  // dynamic in nature(use when you don't know the size of the data structure required)
  // size increment depends on growth policy(eg doubling the current capacity)

  // declare vector
  vector<int> v;

  v.push_back(1);
  v.emplace_back(3);

  // creating a vector of pairs
  vector<pair<int, int>> vec_pair;
  vec_pair.push_back({1, 2});
  vec_pair.emplace_back(3, 4);

  // a vector of size 5 with 100 as entries at all indices
  vector<int> vec(5, 100);

  // a vector of size=5 with some garbage values at all indices
  vector<int> v1(5);

  // creates a vector v2, copies vec into v2
  vector<int> v2(vec);

  // accessing the vector elements
  cout << "V(first element) -> " << v[0] << endl;
  cout << "Vec(third element) -> " << vec[2] << endl;
  cout << "Vec pair(first index's.first) -> " << vec_pair[0].first << endl;

  // iterator for vector
  // container(type) iterator(keyword) name = location
  vector<int>::iterator it = vec.begin(); //
                                          // locations:
                                          // 1. v.begin(),
                                          // 2. v.end()[pointing towards the location just next to the last element]
                                          // 3. v.back()[poiting at the last element]

  cout << *(++it) << endl;

  // iterating over the vector elements
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << " " << endl;
  }

  // auto-> automatically identifies the data type for the iterator
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << " " << endl;
  }

  // for-each loop
  for (auto it : v)
  {
    cout << it << " " << endl;
  }

  // erase element
  v.erase(v.begin() + 2);                // {1,2,3,4,5} -> deletes the element 3 -> {1,2,4,5}
  v.erase(v.begin() + 1, v.begin() + 4); // {1,2,3,4,5,6} -> deletes 2,3,4 ->{1,5,6} [start,end)

  // insert function
  vector<int> v3(5, 99);            //{99,99,99,99,99}
  v3.insert(v.begin() + 1, 300);    //{99,300,99,99,99,99}
  v3.insert(v.begin() + 2, 3, 100); //{99,300,100,100,100,99,99,99,99}

  // size of a vector
  int size = v.size();

  // deletes last vector
  v.pop_back();

  // swap vector
  v1.swap(v2); // swaps v1 and v2

  // clears the entire vector
  v.clear();

  // if empty-> true else false
  bool is_empty = v.empty();
}

void explore_list()
{
  // list is same as vector but it also provides front operations too
  // implemented as a doubly-linked-list
  list<int> ls;

  ls.push_back(1);
  ls.emplace_back(2);

  ls.push_front(3);
  ls.emplace_front(4);

  // insert function in vector is costly
  // rest all operations are same as vector
  // begin,end,rbegin,rend,clear,insert,size,swap,empty
}

void explore_Deque()
{
  // implemented as a double-queue
  deque<int> dq;
  dq.push_back(1);
  dq.emplace_back(2);

  dq.push_front(3);
  dq.emplace_front(4);

  dq.pop_front();
  dq.pop_back();

  dq.back();
  dq.front();

  // rest operations are same as vector and list
}

void explore_stack()
{

  stack<int> st;

  // insertion is only allowed at one end
  // follows LIFO(last in first out)
  st.push(1);    //{1}
  st.push(2);    //{2,1}
  st.push(3);    //{3,2,1}
  st.emplace(4); //{4,3,2,1}

  cout << st.top(); // prints 4
  st.pop();         // removes the latest element-> {3,2,1}
  st.size();        // 3
  cout << st.empty();

  stack<int> st1, st2;
  st1.swap(st2);
}

void explore_queue()
{
  // it is similar to stack..just it follows FIFO(First in First out)
  queue<int> q;
  q.push(1);    //{1}
  q.emplace(2); //{1,2}
  q.push(3);    //{1,2,3}

  q.back() += 5;     //{1,2,8}
  cout << q.front(); // -> 1
  cout << q.back();  // -> 8

  q.pop(); //{2,8}

  // rest all operations are like size,swap etc
}

void explore_p_queue()
{
  // it maintains a queue with the highest element on the top -> also called max heap
  priority_queue<int> pq;
  // time complexity -> O(logn)
  pq.push(5); //{5}
  pq.push(1); //{5,1}
  pq.push(9); //{9,5,1}
  pq.push(3); //{9,5,3,1}

  int _top = pq.top(); // 9 -> O(1)
  pq.pop();            // {5,3,1} TC-> O(logn)

  // minimum heap -> it maintains a queue with the lowest element on the top
  priority_queue<int, vector<int>, greater<int>> min_pq;
  min_pq.push(5);  //{5} TC-> same has max_heap
  min_pq.push(10); //{5,10}
  min_pq.push(2);  //{2,5,10}
  min_pq.push(3);  //{2,3,5,10}

  int min_pq_top = min_pq.top(); // 2
  min_pq.top();                  // -> {3,4,10} TC-> same has max_heap

  // rest all are same as queue and others
}

void explore_set()
{
  // stores elements in sorted manner
  // stores only unique elements
  // everything happens in logarithmic time
  set<int> s;
  s.insert(3); //{3}
  s.insert(3); //{3}
  s.insert(1); //{1,3}
  s.insert(5); //{1,3,5}
  s.insert(2); //{1,2,3,5}
  s.insert(6); //{1,2,3,5,6}

  //{1,2,3,5,6}
  auto it = s.find(3); // returns iterator pointing at element 3
  int cnt = s.count(1);

  // {1,2,3,5,6}
  auto it2 = s.find(4); // returns iterator pointing next to the last element(if the element is not found)

  s.erase(3);  //{1,2,5,6}(erases the element 3) -. Take logarithmic time
  s.erase(it); // erases the element 3 -> takes constant time

  // study upper_bound() and lower_bound()
}

void explore_multiset()
{
  // Everything is same as set
  // only stores duplicate values in sorted manner
  multiset<int> multi_s;
  multi_s.insert(1); // {1}
  multi_s.insert(2); // {1,2}
  multi_s.insert(1); // {1,1,2}
  multi_s.insert(2); // {1,1,2,2}

  multi_s.erase(1); // erase all 1's -> {2,2}

  int _2s_count = multi_s.count(2); // returns the count of 2's

  multi_s.erase(multi_s.find(2)); // only a single 2 is erased
}

void explore_unordered_set()
{
  // upper_bound and lower_bound doesn;t work
  // everything is same as set,but it stores element in random order
  // in most cases TC is constant O(1)
  unordered_set<int> u_set;
}

void explore_map()
{
  // stores keys along with their values
  // keys are unique and in sorted order
  // values can have duplicates
  // values are mapped to unique keys
  // key can be of any data type
  map<int, int> _map;
  map<int, pair<int, int>> _map2;
  map<pair<int, int>, int> _map3;

  _map[1] = 2; // assigns value 2 to the key 1
  _map.insert({3, 6});
  _map.emplace(2, 10);
  // {1,2}
  // {2,10}
  // {3,6}

  _map2[10] = {1, 2}; // {10,{1,2}}
  _map3[{2, 3}] = 90;

  for (auto it : _map)
  {
    cout << it.first << "->" << it.second << endl;
  }

  cout << _map[1]; // 2
  cout << _map[3]; // 6

  auto index = _map.find(1);
  cout << index->second; //

  // similar to set we have :
  // multimap : map with duplicate values
  // unordered set : map with random order keys -> TC is O(1) in most cases
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;
  // they are same
  if (p1.first > p2.first)
    return true;
  return false;
}

void explore_algos_and_functions()
{
  vector<int> v1 = {1, 2, 19, 0, -2, 100};
  sort(v1.begin(), v1.end());                 // [start,end)
  sort(v1.begin(), v1.end(), greater<int>()); // sort in descending order

  pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};

  // sort according to the second element
  // if second element is same sort it according
  // to the first element in descending order
  // sort according to your way
  sort(p, p + 3, comp);

  int num = 7;
  int cnt = __builtin_popcount(num); // returns the number of bitwise one's in integer
  long long num2 = 9876543210123456789;
  int count = __builtin_popcountll(num2); // returns the number of bitwise one's in long long

  string s = "1,2,3,4";
  // to use next_permutation algo start with the sorted string
  do
  {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  int maxi = *max_element(a, a + n);
  int mini = *min_element(a, a + n);
}

int main()
{
  // explain_pairs();
  explore_vectors();

  return 0;
}