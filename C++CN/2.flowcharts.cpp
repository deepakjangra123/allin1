
#include <iostream>
using namespace std;
int main()
{
    int i = 65;
    char x = i;
    cout << x << endl; // A  // implicit typecasting
    int *p = &i;
    char *pc = (char *)p;      // explicit typecasting
    cout << p << endl;         // 0x61ff00
    cout << pc << endl;        // A
    cout << *p << endl;        // 65
    cout << *pc << endl;       // A
    cout << *(pc + 1) << endl; // null
    cout << *(pc + 2) << endl; // null
    cout << *(pc + 3) << endl; // null
    return 0;
}
// void pointer can point to all dts

// void f(int x)  pass by value this will create new memory
// void f(int& x)  pass by reference this will not create new memory

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 10;
    int j = i;
    i++; // 10
    cout << j;
    return 0;
}

// but
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 10;
    int &j = i; // reference veariable
    i++;
    cout << j; // 11
    return 0;
}

// for heap memory allocation // dnamic mempoory ayllocation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;
    delete a; // deallocate memory
    int n;
    cin >> n;
    int *arr = new int[n];
    delete[] a; // deallocate memory  in array
    return 0;
}

// for dynamic in 2 d array  we considered rows as no of array and for column array's respective element ;

// for 2d array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for 10 row , 20 column
    int r, c;
    cin >> r >> c;
    int **p = new int *[r];
    // for manually type in
    // p[0]= new int [20]; ......... p[9]= new int [20];  or
    for (int i = 0; i < 10; i++)
    {
        p[i] = new int[c]; // or p[i]= new int [i+1] we called this type a stair or jagged array
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    // for deallocation
    for (i = 0; i < m; i++)
    {
        delete[] p[i];
    }
    delete[] p;
    return 0;
}

// for define a global

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14 // THIS WILL PUT 3.14 IN PLACE OF PI IN WHOLE CODE BEFORE COMPILE NO EXTRA VARIABLE IS CREATE OR NO ONE CAN CHANGE THIS IN WHOLE CODE
int main()
{
    // PI=54;  //error
    cout << PI; // 3.14
    return 0;
}

#include <iostream>
using namespace std;

#define SQUARE(x) x *x

int main()
{
    int x = 36 / SQUARE(6);
    cout << x; // 36
    return 0;
}

#include <iostream>
using namespace std;

int x = 1;

void print()
{
    int x = 2;
    {
        int x = 3;
        cout << x << endl;
    }
}
int main()
{
    print(); // 3
    return 0;
}

//  fuction creation make code clear &b more readible but increase time complexity
// inline function is same as #define replace the code in place of fuction call
// we use inline function in small loc fuction only ( 2-3 loc) due to not make deriver code bulky

// constant variable
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // const int a=3 = int const a=3
    // const int a;   wrong define
    // a=12;
    const int i = 10;
    int const i2 = 10;
    // i=12; // error
    // i2=12; // error
    cout << i;  // 10
    cout << i2; // 10
    int j = 12;
    const int &k = j; // const reference
    j++;
    // k++; //error
    cout << k << endl;  // 13
    int const j2 = 13;  // const int
    int const &k2 = j2; // const reference
    // k++; //error
    // j++;   // error
    cout << k2; // 13
    const int i4 = 43;
    // int &k4 = i4;   // error // not allowed
    // k++;  // error
    // j++;   // errork
    cout << i4; // 14
    const int i5 = 45;
    // int *p5=&i5;   // error // not allowed

    int i7 =78;
    const int *p7= &i7;  // allowed
    i7++;  // allowed

    const int i6 = 43;
    const int *p6 = &i6;
    // k++;  // error
    // j++;   //error
    cout << *p6; // 43
    cout << i6; // 43

    const int *j3 = &j;
    cout << j3; // 130x61fef8
     

    // int * const p = & i;    // wtf

    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int i4 = 43;
    const int *p = &i4;
    // k++;  // error
    // j++;   // error
    cout << *p; // 43
    cout << i4; // 43
    return 0;
}