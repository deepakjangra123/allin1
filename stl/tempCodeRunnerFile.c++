
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
