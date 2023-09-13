//
// multiplication in cpp
#include <iostream>
using namespace std;
int multiply(int m, int n)
{
    if (n == 0)
        return 0;
    return m + multiply(m, n - 1);
}
int main()
{
    int n, m;
    cout << "enter n & m" << endl;
    cin >> m >> n;
    cout << multiply(m, n);
    return 0;
}

// count number of zeroes

#include <iostream>
using namespace std;
int r, Leftdigit;
int countzero(int n)
{
    r = n % 10;
    Leftdigit = n / 10;
    if (Leftdigit == 0)
        return 0;
    if (r == 0)
        return 1 + countzero(Leftdigit);
    return countzero(Leftdigit);
}
int main()
{
    int n, r;
    cin >> n; // 10230
    cout << countzero(n);
    return 0;
}
//  series sum of 1/2^k nth term
#include <bits/stdc++.h>
using namespace std;
float f(int k, float y = 0)
{
    if (k == 0)
        return 1 + y;
    y = y + 1 / pow(2, k);
    return f(k - 1, y);
}
int main()
{
    int k = 9;
    cout << f(k);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 3, b = 3, c = 4;
//     // cout << a | b << endl; //error
//     cout << (a | b) << endl;   // 3
//     cout << (a || b) << endl;  // 1
//     cout << (a or b) << endl;  // 1
//     cout << (a | c) << endl;   // 7
//     cout << (a || c) << endl;  // 1
//     cout << (a or c) << endl;  // 1
//     cout << (a & b) << endl;   // 3
//     cout << (a && b) << endl;  // 1
//     cout << (a and b) << endl; // 1
//     cout << (a & c) << endl;   // 0
//     cout << (a && c) << endl;  // 1
//     cout << (a and c) << endl; // 1
//     return 0;
// }

// // https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 3, b = 4, c = 5;
//     // cout << a | b << endl; //error
//     cout << (a | b) << endl;   // 7
//     cout << (a or b) << endl;  // 1
//     cout << (a | c) << endl;   // 7
//     cout << (a or c) << endl;  // 1
//     cout << (a & b) << endl;   // 0
//     cout << (a and b) << endl; // 1
//     cout << (a & c) << endl;   // 1
//     cout << (a and c) << endl; // 1
//     return 0;
// }
// sum of digits
#include <bits/stdc++.h>
using namespace std;
int sum(int y, int n)
{
    if (n == 0)
        return y;
    y = y + n % 10;
    return sum(y, n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << sum(0, n);
    return 0;
}

// x^n in recurtion

#include <bits/stdc++.h>
using namespace std;
int pow(int x, int n)
{
    if (n == 0)
        return 1;
    return x * pow(x, n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow(x, n);
    return 0;
}

// print n numbers

#include <bits/stdc++.h>
using namespace std;
void f1(int a, int n)
{
    if (a <= n)
    {
        cout << a << " ";
        a++;
        return f1(a, n);
    }
    else
        return;
}
void f2(int a, int n)
{
    if (a <= n && a > 0)
    {
        cout << a << " ";
        a--;
        return f2(a, n);
    }
    else
        return;
}
int main()
{
    int n;
    cin >> n;
    f1(1, n);
    f2(n, n);
    return 0;
}

// no of digits

#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    int a = n / 10;
    if (a == 0)
        return 1;
    return 1 + f(a);
}
int main()
{
    int n, a;
    cin >> n;
    cout << f(n);
    return 0;
}

// fibonnanci series

// #include<bits/stdc++.h>
// using namespace std;
// int f(int i,int a ,int n)
// {
//     if (a==0 || a==1) return a;
//     if (i<=n)
//     {
//         cout<<a<<" ";
//         a=f(i-1)+f(i-2);
//         return f(a,n);
//     }
//     else return 0;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     f(0,0,n);
//     return 0;
// }

#include <iostream>
using namespace std;

void print(int n)
{
    if (n < 0)
    {
        return;
    }
    if (n == 0)
    {
        cout << n << “ “;
        return;
    }
    print(n--);
    cout << n << “ “;
}

int main()
{
    int num = 3;
    print(num); // run time error
}

// sum of array

#include <bits/stdc++.h>
using namespace std;
int sum(int a[], int n)
{
    if (n == 1)
        return a[0];
    int output = a[0] + sum(a + 1, n - 1);
    return output;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sum(a, n);
    delete[] a;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A) / sizeof(A[0]);
    cout << sizeof(A) << endl;
    cout << sizeof(A[0]) << endl;
    cout << n;
    return 0;
}

// check number recursively

#include <bits/stdc++.h>
using namespace std;
int n;
bool f(int a[], int s)
{
    if (s == 1 && n == a[0])
        return true;
    if (s == 1 && n != a[0])
        return false;
    if (n != a[0])
        return f(a + 1, s - 1);
    return true;
}
int main()
{
    int s;
    cin >> n >> s;
    int *a = new int[s];
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    if (f(a, s))
        cout << "true";
    else
        cout << "false";
    delete[] a;
    return 0;
}

// read array recursively

#include <bits/stdc++.h>
using namespace std;
int input(int a[], int s)
{
    if (s != 0)
    {
        cin >> a[0];
        return input(a + 1, s - 1);
    }
    return 0;
}
int main()
{
    int s;
    cin >> s;
    int *a = new int[s];
    input(a, s);
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    delete[] a;
    return 0;
}

// return first index of a num in array recursively

#include <bits/stdc++.h>
using namespace std;
int firstIndex(int a[], int size, int x, int currIndex)
{
    if (size == currIndex)
    {
        return -1;
    }
    if (a[currIndex] == x)
    {
        return currIndex;
    }
    return firstIndex(a, size, x, currIndex + 1);
}

int main()
{
    int s, n;
    cout << "enter the element & size of array :" << endl;
    cin >> n >> s;
    int *a = new int[s];
    cout << "enter the array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    cout << "element found at index: " << firstIndex(a, s, n, 0);
    delete[] a;
    return 0;
}

// return last index of a num found in array recursively

#include <bits/stdc++.h>
using namespace std;
int firstIndex(int a[], int size, int x, int currIndex)
{
    if (currIndex < 0)
    {
        return -1;
    }
    if (a[currIndex] == x)
    {
        return currIndex;
    }       
    return firstIndex(a, size, x, currIndex - 1);
}

int main()
{
    int s, n;
    cout << "enter the element & size of array :" << endl;
    cin >> n >> s;
    int *a = new int[s];
    cout << "enter the array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    cout << "element found at index: " << firstIndex(a, s, n, s - 1);
    delete[] a;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int f(int a[])
{
    return *a;
}
int main()
{
    int a[] = {4, 2, 3, 4};
    cout << f(a); // 4
    return 0;
}

// print all indexes  where the element is presernt in array

#include <bits/stdc++.h>
using namespace std;
int f(int a[], int size, int x, int currIndex)
{
    if (size == currIndex)
    {
        return -1;
    }
    if (x != a[currIndex])
        return f(a, size, x, currIndex + 1);
    cout << currIndex << " ";
    return f(a, size, x, currIndex + 1);
}
int main()
{
    int s, n;
    cout << "enter the element & size of array :" << endl;
    cin >> n >> s;
    int *a = new int[s];
    cout << "enter the array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    f(a, s, n, 0);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int f(int x,int y=2)
{
    cout<<x<<y;
}
int main()
{
    f(1);
    return 0;
}
