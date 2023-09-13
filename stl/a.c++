
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
    vector<int> v1(2, 3);
    vector<int> v2(v1);
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

#include <bits/stdc++.h>
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
