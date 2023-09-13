#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1  length of string

    char s[30];
    cout << "Enter any string : ";
    gets(s);
    cout << "Length of the string : " << strlen(s);

    // 2
    char str1[30] = "Mango";
    char str2[30] = "ManGo";

    if (strcmp(str1, str2) == 0)
    {
        cout << "str1 and str2 both are same";
    }
    else
    {
        cout << "str1 and str2 are not same"; // str1 and str2 are not same output
    }

    // 3
    char str1[30] = "Mango";
    char str2[30] = "MaNgO";

    if (strcmpi(str1, str2) == 0)
    {
        cout << "str1 and str2 both are same"; // str1 and str2 both are same output
    }
    else
    {
        cout << "str1 and str2 are not same";
    }

    // 4  concatenation 
    char str1[10] = "Hello";
    char str2[10] = "World";
    strcat(str1, str2);
    cout << "String after concatenation: " << str1; // HelloWorld

    // 5  copy 
    char str1[50] = "string 1";
    char str2[50] = "string 2";

    cout << "str1 before copy: " << str1 << endl; // string 1

    strcpy(str1, str2);
    cout << "str1 after copy: " << str1; // string 2

    // 6 uppercase
    char str1[30] = "hello world";

    // convert the str1 into uppercase
    strupr(str1);
    cout << "str1 is: " << str1; // HELLO WORLD

    // 7 lowercase
    char str1[30] = "HELLO WORLD";

    // convert the str1 into lowercase
    strlwr(str1);
    cout << "str1 is: " << str1; // hello world

    // 8 reverse string
    char str1[30] = "HELLO WORLD";

    // convert the str1 into reverse order
    strrev(str1);
    cout << "str1 is: " << str1; // DLROW OLLEH

    // 9 lower
    char str1 = 'H';

    str1 = tolower(str1);
    cout << "str1 is: " << str1; // h

    // 10 upper
    char str1 = 'h';

    str1 = toupper(str1);
    cout << "str1 is: " << str1; // H

    // 11 check is uppercase
    char str1 = 'A';

    if (isupper(str1) != 0)
    {
        cout << "str1 is in uppercase"; // output
    }
    else
    {
        cout << "str1 is not in uppercase";
    }

    // 12 check is lowercase
    char str1 = 'a';

    if (islower(str1) != 0)
    {
        cout << "str1 is in lowercase";
    }
    else
    {
        cout << "str1 is not in lowercase"; // output
    }

    // 13 check alphabet
    char str1 = 'g';

    if (isalpha(str1) != 0)
    {
        cout << "str1 is an alphabet"; // output
    }
    else
    {
        cout << "str1 is not an alphabet";
    }

    // 16 check space
    char str1 = ' ';

    if (isspace(str1) != 0)
    {
        cout << "str1 is a space"; // output
    }
    else
    {
        cout << "str1 is not a space";
    }

    // 17 check punctuation 
    char str1 = '?';

    if (ispunct(str1) != 0)
    {
        cout << "str1 is a punctuation"; // output
    }
    else
    {
        cout << "str1 is not a punctuation";
    }

    // 18 check digit
    char str1 = '5';

    if (isdigit(str1) != 0)
    {
        cout << "str1 is a digit"; // output
    }
    else
    {
        cout << "str1 is not a digit";
    }

    // 19  string to integer

    int x;
    x = atoi("512");
    cout << "value of x = " << x;

    // 20  string to long

    long x;
    x = atol("85642");
    cout << "value of x = " << x;

    // 21  string ot doulbe

    double x;
    x = atof("7462.3659");
    cout << "value of x = " << x;

    // 22 string length
    string s = "Dremendo";
    cout << "Length = " << s.length(); // 8

    // 23 find character using index in string
    string s = "Dremendo";
    cout << "Character at index 3 = " << s.at(3); // m

    // 24 insert at index
    string s = "Tier";
    s.insert(2, '\0');
    cout << "String = " << s; // Tiger
 
    // 25 erase
    string s = "Hello World";
    s.erase(4, 6);            // start form 4 and take erase 6 values
    cout << "String = " << s; // Helld
    s.erase(4);               // start form 4 and erase all after

    // 26 string append (concatination)
    string s = "Hello";
    s.append(" World");
    cout << "String = " << s << endl;
    s = s + " I am learning C++ Programming"; // Hello World I am learning C++ Programming
    cout << "String = " << s << endl;

    // 27 compare
    string s1 = "Superman";
    string s2 = "Superman";

    if (s1.compare(s2) == 0)
    {
        cout << "Both strings are same"; // output
    }
    else
    {
        cout << "Both strings are not same";
    }

    // 28  substring

    string s = "Superman";

    cout << "Print the 1st 3 characters of the current string : " << s.substr(0, 3) << endl; // sup
    cout << "Print the 1st 3 characters starting from index 2 : " << s.substr(2, 3) << endl; // per
    cout << "Print all the characters starting from index 5 till end : " << s.substr(5);     // man

    // 29 find the index of char from last
    string s1 = "I am a boy and I love java programming.";
    string s2 = "I";

    if (s1.find_last_of("I") != s1.npos)
    {
        cout << "Last I found at index : " << s1.find_last_of("I") << endl; // 15
    }

    // 30 find th eindex of char form first 
    string s1 = "I am a boy and I love java programming.";
    string s2 = "I";
    if (s1.find_first_of("I") != s1.npos)
    {
        cout << "I found at index : " << s1.find_first_of("I") << endl; // 0
    }
    if (s1.find_first_of("I", 6) != s1.npos)
    {
        cout << "I found after index 6 at index : " << s1.find_first_of("I", 6) << endl; // 15
    }
    return 0;
}

//  some work  some work some work some work   some work   some work

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "23425";
    string c = "jsfijhsuhj";
    cout << a + c << endl;
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << c[1] << endl;
    cout << a[1] + a[0] << endl;
    cout << a[1] + c[0] << endl;
    cout << c[1] + c[0] << endl;
    c = c[1] + c[0] + c[3];
    cout << c << endl; // garbage value
    // cout<<c[0]+'fuck'; // error
    // cout<<'a'+"jdsnfj"; // error
    cout << c;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
string removeCharRecursive(string str, char X)
{
    if (str.length() == 0)
    {
        return "inlast_fuck_u";
    }
    if (str[0] == X)
    {
        return removeCharRecursive(str.substr(1), X);
    }
    return str[0] + removeCharRecursive(str.substr(1), X);
}
int main()
{
    string str;
    cin >> str;
    char X = 'x';
    str = removeCharRecursive(str, X);
    cout << str;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "shdfjhbsdjfh";
    if (str[0] == 's') // not allowed "s"
    {
        cout << "true";
    }
    cout << "fakse";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "shdfjhbsdjfh";
    str.substr(1);
    cout << str.substr(1) << endl;    //  hdfjhbsdjfh
    cout << str.substr(1, 3) << endl; //  hdf
    cout << str;                      // shdfjhbsdjfh
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char a;
    // a='A';
    // cout<<int(24);
    // cout<<int(a);
    // cout<<int('B');
    // cout<<char(67);
    for (int i = 0; i <500; i++)
    {
       cout<<char(i)<<" ";
    }
    // cout<<char(0);
    return 0;
}





