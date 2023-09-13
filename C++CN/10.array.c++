
#include <bits/stdc++.h>
using namespace std;
class array
{
    int *data;
    int nextindex;
    int capacity;

public:
    array()
    {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }
    array(array const &a)
    {
        // this->data =a.data; //shallow copy
        this->data = new int[a.capacity];
        for (int i = 0; i < a.nextindex; i++)
        {
            this->data[i] = a.data[i];
        }
        this->nextindex = a.nextindex;
        this->capacity = a.capacity;
    }
    void operator=(array const &a)
    {
        this->data = new int[a.capacity];
        for (int i = 0; i < a.nextindex; i++)
        {
            this->data[i] = a.data[i];
        }
        this->nextindex = a.nextindex;
        this->capacity = a.capacity;
    }
    void add(int element)
    {
        if (nextindex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity *= capacity;
        }
        data[nextindex] = element;
        nextindex++;
    }
    int get(int i)
    {
        if (i < nextindex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }
    void add(int i, int element)
    {
        if (i < nextindex)
        {
            data[i] = element;
        }
        else if (i == nextindex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }
    void print()
    {
        for (int i = 0; i < nextindex; i++)
        {
            cout << data[i] << endl;
        }
    }
};
int main()
{
    array a1;
    a1.add(10);
    a1.add(20);
    a1.add(30);
    a1.add(40);
    a1.add(50);
    a1.add(60);
    a1.add(60);
    a1.print();
    array a2(a1); // shallow copy
    a1.add(0, 100);
    a2.print();

    array a3; // or array a3=a1;// shallow copy
    a3 = a1;
    a3.print();
    return 0;
}

// max = INT_MIN;  // INT_MIN = -2**31

#include <bits/stdc++.h>
using namespace std;
void print(int a[])
{
    cout << sizeof(a); // 8 bytes i.e it only storing the arress
}
int main()
{
    int arr[10];
    print(arr);
    cout << sizeof(arr); // 40 bytes
    return 0;
}

// initialize array with 0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
// 1
// 2
// 3
// 0
// 0
// 0
// 0
// 0
// 0
// 0

// array ke case me jo changes function ke andar hote h vo globally bhi hoyte
