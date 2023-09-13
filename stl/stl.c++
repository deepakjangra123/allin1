// love babbar

#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " "; // 1 2 3 4
    }
    cout << endl;
    cout << a.size() << endl;  // 4
    cout << a.at(3) << endl;   // 4
    cout << a.front() << endl; // 1
    cout << a.back() << endl;  // 4
    cout << a.empty() << endl; // 0  means not empty
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1(2, 3); // 3 3
    vector<int> v2(v1);   // copy but no change in v1
    // v2.push_back(433);
    vector<int> &v3(v1); // now changed v1
    // v2.push_back(433);
    // vector<int> v2(&v1);//error
    cout << v.capacity() << endl;
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(123);
    cout << v.capacity() << endl;
    v.push_back(18);
    cout << v.capacity() << endl;
    v.push_back(13);
    cout << v.capacity() << endl;
    cout << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(2) << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    // d.pop_front();
    // d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << d.size() << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << d.at(2) << endl;
    cout << d.empty() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    list<int> l1(3, 233);
    for (int i : l1)
    {
        cout << i << " ";
    }
    l.push_back(2);
    l.push_front(1);
    for (int i : l)
    {
        cout << i << " ";
    }
    l.erase(l.begin());
    cout << l.size() << endl;
    return 0;
}

#include <bits/stdc++.h>-+

using namespace std;
int main()
{
    stack<int> s;
    s.push(23);
    s.push(86);
    s.push(3);
    cout << s.top() << endl;
    s.push(233);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(23);
    q.push(86);
    q.push(3);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> max;                            // max heap
    priority_queue<int, vector<int>, greater<int>> min; // min heap
    max.push(22);
    max.push(23);
    max.push(86);
    max.push(3);
    int m = max.size();
    for (int i = 0; i < m; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;
    min.push(22);
    min.push(23);
    min.push(86);
    min.push(3);
    int n = min.size();
    for (int i = 0; i < n; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(23);
    s.insert(23);
    s.insert(19);
    s.insert(19);
    s.insert(11);
    s.insert(23);
    s.insert(2);
    s.insert(33);

    for (int i : s)
    {
        cout << s << " ";
    }
    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
    {
        cout << s << " ";
    }
    cout << s.count(23) << endl; // 23 is present or not
    set<int>::iterator i1 = s.find(23);
    for (auto it = i1; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m; // key , value
    m[1] = "deep";
    m[13] = "jangra";
    m[11] = "kumar";
    m.insert({5, "bheem"});
    for (auto i : m)
    {
        cout << i.first() << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*it).first << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(23);
    v.push_back(12);
    v.push_back(86);
    v.push_back(3);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << binary_search(v.begin(), v.end(), 6) << endl;
    cout << binary_search(v.begin(), v.end(), 86) << endl;
    cout << lower_bound(v.begin(), v.end(), 86) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 86) - v.begin() << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    int a = 34, b = 43;
    cout << a << " " << b << endl;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    string s = "deep";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}

// striver

#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.second << " " << p.second.first;
    pair<int, int> a[] = {{1, 2}, {2, 5}, {3, 1}};
    cout << a[1].second;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(23);
    v.emplace_back(11);

    vector<pair<int, int>> v1;

    v.push_back(23);
    v.emplace_back(11);

    vector<int> v(2);
    vector<int> v(2, 12);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> v(2, 100);          // 100 100
    v.insert(v.begin(), 300);       // 300 100 100
    v.insert(v.begin() + 1, 2, 10); // 300 10 10 100 100

    vector<int> copy(2, 10);                  // 10 10
    v.insert(v.begin(), v.end(), copy.end()); // 10 10  300 10 10 100 100

    cout << v.size() << endl;

    v.pop_back();

    // v2->{23, 32};
    // v3->{2, 1};
    // v2.swap(v3);
    v.clear();

    cout << v.empty() << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(23);
    l.emplace_back(11);
    l.push_front(2);
    l.emplace_front(3);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(23);
    d.emplace_back(11);
    d.push_front(234);
    d.emplace_front(34);
    d.pop_back();
    d.pop_front();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(23);
    s.emplace(13);
    cout << s.top();
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    stack<int> s1, s2;
    s1.swap(s2);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(23);
    q.push(21);
    q.emplace(223);
    q.back += 5;

    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.front();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq; // max heap
    pq.push(23);
    pq.push(21);
    pq.emplace(223);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    priority_queue<int, vector<int>, greater<int>> pq; // max heap
    pq.push(23);
    pq.push(21);
    pq.emplace(223);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(12);
    s.insert(23);
    s.insert(23);
    s.insert(12);
    s.insert(11);

    auto it = s.find(3);
    s.erase(4);  // logn
    s.erase(it); // o(1)
    int c = s.count(23);
    auto it1 = s.find(3);
    auto it2 = s.find(32);
    s.erase(it1, it2);
    auto it = s.upper_bound(2);
    auto it = s.lower_bound(23);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(12);
    ms.insert(23);
    ms.insert(23);
    ms.insert(12);
    ms.erase(12);
    int c = ms.count(23);
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(1) + 2);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> us;
    // here upper & lower obund not work
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;
    map<int, pair<int, int>> m;
    map<pair<int, int>, int> m;

    m[1] = 2;
    m.emplace({3, 1});
    m.insert({2, 4});
    m[{2, 3}] = 10;
    for (auto it : m)
    {
        cout << it.first << " " << it.second;
    }
    return 0;
}

// in multimap multi keys

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    else if (p1.second == p2.second)
    {
        if (p1.second < p2.second)
        {
            return true;
        }
    }
    return false;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    sort(a + 2, a + 4);
    sort(a, a + n, greater<int>);
    pair<int, int> a[] = {{1, 23}, {3324, 43}, {25, 232}};

    sort(a, a + n, comp);

    int num = 7;
    int cnt = _builtin_popcountll();

    long long num = 721312321;
    int cnt = _builtin_popcountll();

    // int maxi=*max_element(a,a+n);

    // next_permutation(s.begin(),s.end())
    return 0;
}

// new mwmbwe

#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    // p = make_pair(2, "abcd");
    p = {2, "abcd"};
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    pair<int, int> arr[3];
    arr[0] = {1, 2};
    arr[1] = {4, 7};
    arr[2] = {4, 3};
    swap(arr[1], arr[0]);
    for (int i = 0; i < 3; ++i)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    // cin>>p.first;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v) v
{
}
int main()
{
    vector<pair<int, int>> v;
    v.push_back(4);
    printvec(v);
    v.pop_back();
    vector<pair<int, int>> v = {{23, 44}, {4232, 123}, {23, 42}};
    return 0;
}

// void printvec(vector <int> &v)
// void printvec(vector <pair<int,int>> &v)

for ()
{
    int x, y;
    cin >> x >> y;
    v.push_back(make_pair(x, y));
    // v.push_back({x, y});
}

// v.push_back(vector<int> ());

// vector<pair<int,int>>v ={{23, 44}, {4232, 123}, {23, 42}};
// vector<pair<int,int>> :: iterator it;
// for (it = v.begin(); it = v.end(); ++it)
// {
//     cout << (*it).first << " " << (*it).second << endl;
// }

// for (it = v.begin(); it = v.end(); ++it)
// {
//     cout << it->first << " " << it-> second << endl;
// }

// for (int i : v)
// {
//     value++;
//     cout << value << " ";
// }
// for (int i : v)
// {
//     cout << value << " ";
// }
// vector<pair<int,int>>v ={{23, 44}, {4232, 123}, {23, 42}};
// for (pair<int, int> &value : v)
// {
//     cout << value.first << " " << value.second << endl;
// }
// for (auto &value : v)
// {
//     cout << value.first << " " << value.second << endl;
// }

// auto a = 1.0;
// cout << a << endl;

// map<int,string> m;
//  m[1]=23;
//  map<int,string> :: iterator it;
//  for (it = m.begin(); it = m.end(); ++it)
//  {
//      cout << (*it).first << " " << (*it).second << endl;
//  }
//
//  for (auto &pr=m)
//  {
//      cout << pr.first << " " << pr.second << endl;
//  }
// map<int,int> m;
//
// if (it != m.end())
// if (it !+ m.end())

// print(m);