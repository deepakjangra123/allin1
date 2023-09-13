
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[] = "deep";
    cout << a << endl;    // 0x61fe84
    cout << a[1] << endl; // deep
    cout << a[2] << endl; // deep
    // cout<<a[23]<<endl; // all assice char
    cout << a[3] << endl; // deep
    // int n=strlen(a);  //error
    // cout<<n<<endl; // error
    cout<<a+1; // 0x61fe9c
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a= "deep";
    cout << a << endl;    // deep
    cout << a[1] << endl; // e
    cout << a[2] << endl; // e
    cout<<a[23]<<endl; // blank char
    cout << a[3] << endl; // p
    // cout<<a+1; // error
    // int n=strlen(a);  //error
    // cout<<n<<endl; // error
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[] = "deep";
    cout << a << endl;     // deep
    cout << a[1] << endl;  // e
    cout << a[2] << endl;  // e
    cout << a[65] << endl; // char pointing 65 no in assciee table
    cout << a[3] << endl;  // p
    cout << a[3] << endl;  // p
    cout << strlen(a);     // 4
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);   // deep input
    cout << s << endl; // deep output
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;  // deep input
    cout << s; // deep output
    // cout << s+1; // error
    cout << s[0]; // d
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin >> s;      // deep input
    cout << s;     // d output
    cout << s + 1; // 101 output
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[] = {};
    cin >> s;      // deep input
    cout << s;     // deep output
    cout << s[0];  // d output
    cout << s + 1; // eep output
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1];
    cin >> s;             // deep input
    cout << s << endl;    // deep output
    cout << s[0] << endl; // d
    cout << s[1] << endl; // e
    cout << s[2] << endl; // e
    cout << s[3] << endl; // p
    cout << s[4] << endl; // garbage
    cout << s[5] << endl; // garbage
    cout << s + 1;        // eep output
    return 0;
}
// string palindrome check
#include <bits/stdc++.h>
using namespace std;
bool stringpalindrome(char s[], int a, int len)
{
    a if (a >= len - 1) return true;
    if (s[a] != s[len - 1])
        return false;
    return stringpalindrome(s, a + 1, len - 1);
}
int main()
{
    char s[100];
    cin >> s;
    int n = strlen(s);
    if (stringpalindrome(s, 0, n))
        cout << "true";
    else
        cout << "false";
    return 0;
}

// exchange pi === 3.14 in string

#include <bits/stdc++.h>
using namespace std;
void f(char s[], int i)
{
    if (s[i] == '\0')
        return;
    if (s[i] == "p" && s[i + 1] == "i")
    {
        s[i] = '3';
        s[i + 1] = '.';
        s[i + 2] = '1';
        s[i + 3] = '4';
        return f(s, i + 2);
    }
    return f(s, i + 2);
}
int main()
{
    char s[100];
    cin >> s;
    f(s, 0);
    cout << s;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[20], ch = 'a', ch1 = 97;
    cout << int(ch) << endl; // 97 print ascii num of char
    cout << ch1 << endl;     // a print char of num
    cin >> s;                // deep
    cout << s << endl;       // deep
    cout << s[0] << endl;    // d
    s[0] = 'o';
    cout << s[0] << endl; // o
    cout << s << endl;    // oeep
    return 0;
}

// string to read word

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;                             //  deep jangra kumar
    cout << "You entered: " << str << endl; // deep
    cout << "\nEnter another string: ";
    cin >> str;                             // no use
    cout << "You entered: " << str << endl; // jangra
    return 0;
}

// output
//  if u enter 1 then u can enter 2 but both with single word not line u can also use in for loop
//  but if enter a line with spaces (i.e deep kumar jangra) then first cout show 1 word second show 2nd word(i.e
//  deep  kumar)

// String to read a line of text

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);                      // deep kumar jangra
    cout << "You entered: " << str << endl; // deep kumar jangra
    return 0;
}

// string using string data type
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);                      // deep kumar jangra
    cout << "You entered: " << str << endl; // deep kumar jangra
    return 0;
}

// passing string to function

#include <iostream>
using namespace std;
void display(char *);
void display(string);
int main()
{
    string str1;
    char str[100];

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter another string: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
    return 0;
}
void display(char s[])
{
    cout << "Entered char array is: " << s << endl;
}
void display(string s)
{
    cout << "Entered string is: " << s << endl;
}

// concatination in string  // using strcat(str1,str2);

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // take large size of array
    char str[10] = "Hello";
    cout << "Before Concatenation : " << str << endl; // Hello
    strcat(str, " World");
    cout << "After Concatenation : " << str; // Hello World
    return 0;
}

// to copy one string to other use strcpy(s2,s1)  s1 into s2
// copies first 5 chars of s4 into s5  strncpy(s5, s4, 5);

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = 'T';
    string str; // not string str =ch;
    str = ch;
    cout << str; // T
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = 'T';
    // passing 1 as n
    string str1(1, ch);
    // passing 2 as n
    string str2(3, ch);
    // printing both the strings
    cout << str1 << endl; // T
    cout << str2 << endl; // TTT
    return 0;
}

// remove x 

#include <string.h>
#include <iostream>
using namespace std;
 
int main()
{
    string s1 = "Geeks";
    string r = s1.substr(3, 2);
    cout << "String is: " << r;
    return 0;
}

