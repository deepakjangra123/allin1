

// int *p=new int ;
//  int *a = new int[s];  //for array
// for char array
// char *a=new char[100];
// ororororor
// initially give only char *a; //then later on the size

// for class objects
//  student *obj = new student ;
// orororor
// student *obj=new student ();
// delete obj;

#include <bits/stdc++.h>
using namespace std;
// #include"student.cpp" //created sowhere  // not working so creating file
class student
{ // by defaullt private
public:
    int rollno;
    int age;

public:
    void display()
    {
        cout << age << " " << rollno << endl;
    }
};
int main()
{
    student s1, s2, s3; // objects created statically // or student s1=student();student s2=student();
    // so here this is not done i.e s1=4;
    // here obj . prop= value;
    s1.age = 21;            // so s1 box m age h aur usme 21
    s1.rollno = 28;         // same
    s2.age = 22;            // so s2 box m age h aur usme 21
    s2.rollno = 19;         // same
    cout << s1.age << endl; // 21   // if private not allowed
    // for function
    s1.display();

    student *s4 = new student; // object created dynmaically
    // here s4.age can't work so;
    //  *s4.age=23; //error
    (*s4).age = 23;
    /// ororororororo
    s4->rollno = 28;
    cout << (*s4).age << endl;    // 23
    cout << s4->age << endl;      // 23
    cout << (*s4).rollno << endl; // 28
    cout << s4->rollno << endl;   // 28
    // for function

    (*s4).display();
    // ororororor
    s4->display();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class a
{
    // public:
    int age = 23;

public:
    void p()
    {
        cout << age << endl;
    }
};
int main()
{
    a o1;
    // o1.age=23;
    o1.p();

    // for dynamic
    a *o2 = new a;
    (*o2).p();
    // ororor
    o2->p();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class a
{

    int age = 23; // or make funcction to set sage default 23

public:
    int getage()
    {
        return age;
    }
    void setage(int a) // here default can also be put
    {
        age = a;
    }
};
int main()
{
    a s1;
    s1.setage(43);
    // s1.age=23; //error
    // cout<<s1.age;//error
    cout << s1.getage();

    // for dynamic
    a *s2 = new a;
    (*s2).setage(25); // or s2->setage(25);
    cout << (*s2).getage();

    return 0;
}

// creating a default constructor

#include <bits/stdc++.h>
using namespace std;
class a
{
public:
    int age = 23;
    void display()
    {
        cout << age << endl;
    }
    // u can creatte multiple user define constructor i.e paramatric , non parametric , default
    // for paramatrized a s1(4);
    a() // user define constructor //
    {
        cout << "constructor called" << endl;
    }
};
int main()
{
    a s1; //  constructor called automatically first time
    // for paramatrized constructor a s1(4);
    s1.display(); // 23

    a *s2 = new a; // constructor called  automatically second time
    // for dynamic paramatrized constructor a * s1=new a(4);
    (*s2).display(); // 23
    s2->display();   // 23
    return 0;
}

// unless /untill any user define constructor is creates this  ( student s1 ) work fine,else it must consist its proper object creation method

#include <bits/stdc++.h>
using namespace std;
class a
{
public:
    a(int z)
    {
        cout << z;
    }
};
int main()
{
    // a s1; //it produce error or give a default value inside constructor parenthesis // a(int z=10)
    a s1(2); // no error //2 //a s1 = a(2);

    // a *s2=new a; //it produce error or give a default value inside constructor parenthesis // a(int z=10)
    a *s2 = new a(10); // no error //10
    return 0;
}

// same datamember same as argument

#include <bits/stdc++.h>
using namespace std;
class a
{
public:
    int age;
    void display(int age)
    {
        // age = age //error so
        s1.age = age;
    }
};
int main()
{
    a s1;
    s1.display(23);
    cout << s1.age;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    student()
    {
        cout << "default constructor" << endl;
    }
    student(string s, int a, int g)
    {
        name = s;
        age = a;
        gender = g;
    }
    // for student b=a;
    // copy ocnstructor  without this value alos get copied
    // student(student &a)
    // {
    //     name = a.name;
    //     age = a.age;
    // }

    // for student b(a);
    //  student(student a) // passing by value create new obj
    //  {
    //      this->name = a->name;
    //      this->age = a->age;
    //  }
    // ororooror
    //  student(student &a) // pass by reference //const can also be written to change its property
    //  {
    //      this->name = a.name;
    //      this->age = a.age;
    //  }

    void print()
    {
        cout << name << "\n"
             << age << "\n"
             << gender << endl;
    }
};
int main()
{
    // static to static copy object
    // static to dynamic copy object
    // dynamic to static copy object
    // dynamic to dynamic copy object
    student a("deep", 23, 1);
    a.print();
    // student b;
    //  b.age=a.age; //ororor direct // b=a //*b=a//b=*a//*b=*a; // = is copy assignment operator
    //  student b(a) //no user define constructor //here no default constructor is called
    student b = a; // copued values //student b(a); //
    // or b=a;
    b.print();

    //* is called derefer
    // dynamically
    student *s1 = new student("deep", 23, 1);
    (*s1).print();
    // student *s2 = new student();
    //  (*s2).age=(*s1).age;
    // ororor
    //  student s2(*s1) //here s4 is static //direct//no user define constructor //here no default constructor is called
    //  student *s2 = new student(*s1); //i .e is dynamic
    // student *s3= new student (a);
    student b = a; // copued values //student b(a); //
    // or b=a;
    b.print();

    return 0;
}

// shallow copy

// deep copy constructor concept

//~ destructor
// destructor called each time when any copy constructor is called but default constructor is not called

// size of object // sizeof(obj);

// static keyword

// b=a; // no copy constructor iks called it directly replace the value from a
// but student b=a; here

// this will always set first created obj
// after that u have to call like  s2.deno;

#include <bits/stdc++.h>
using namespace std;
class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numenator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << this->numerator << "\n"
             << numerator << "\n"
             << this->denominator << "\n"
             << denominator << endl;
    }
    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        // oror
        // int j=min(numerator,denominator);
        for (int i = 0; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
    void add(fraction f2)
    // this means fraction f2 =main.f2//copyconstructor //which creating an another f2
    // t avoid this copy pass f2 by reference with const to also avoid change so
    // void add(fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        // or
        //  int lcm =this-> denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify(); // this ->simplify;
    }
};
int main()
{
    fraction f1(23, 10);
    fraction f2(18, 7);
    f1.add(f2);
    f1.print();
    f2.print();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class complex
{
private:
    int real, imaginary;

public:
    complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }
    void add(complex a)
    {
        int r1 = real + a.real;
        int i1 = imaginary + a.imaginary;
        real = r1;
        imaginary = i1;
        // ororor
        complex(r1, i1);
    }
    void multiply(complex a)
    {
        int r1 = real * a.real - (a.imaginary) * imaginary;
        int i1 = real * a.imaginary + (a.real) * imaginary;
        real = r1;
        imaginary = i1;
    }
};
int main()
{
    int r1, r2, i1, i2;
    cout << "enter real & imaginary part of first complex no" << endl;
    cin >> r1 >> i1;
    cout << "enter real & imaginary part of second complex no" << endl;
    cin >> r2 >> i2;
    complex s1(r1, i1);
    complex s2(r2, i2);
    s1.add(s2);
    s1.print();
    s2.print();
    s1.multiply(s2);
    s1.print();
    s2.print();
    return 0;
}

#include <iostream>
using namespace std;
class complex
{
    float real, imag;

public:
    complex(complex &c)
    {
        cout << "copy constructor" << endl;
        real = c.real;
        imag = c.imag;
    }
    void showData()
    {
        count << "the sum is" << endl;
        cout << real << "+i" << imag << endl;
    }

    complex addition(complex x, complex y)
    {
        complex temp;
        temp.real = x.real + y.real;
        temp.imag = x.imag + x.imag;
        return temp;
    }
};

int main()
{
    complex c2(2, 3), c3(c2), c1;
    c2.showData();
    c3.showData();
    c1 = c1.addition(c2, c3);
    c1.showData();
    return 0;
}
