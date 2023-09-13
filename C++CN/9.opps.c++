// shallow and deep copy

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    char *name;
    student(int age, char *name)
    {
        this->age = age;
        this->name = name;
    }
    void print()
    {
        cout << age << " " << name << endl;
    }
};
int main()
{
    // this is shallow copy //coz name point toward starting address of name char array not coping the array in ech obj creation;
    char name[] = "abcd";
    student s1(23, name); // 23 abcd
    s1.print();

    name[2] = 'e';
    student s2(40, name); // 40 abed
    s2.print();
    // hence changes made also reflect in shallow copy
    s1.print(); // 23 abed

    return 0;
}

// deep copy

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    char *name;
    student(int age, char *name)
    {
        this->age = age;
        // deep copy // +1 is for adding a null char at end
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void print()
    {
        cout << age << " " << name << endl;
    }
};
int main()
{
    // this is deep copy //coz name point toward a new location name;
    char name[] = "abcd";
    student s1(23, name); // 23 abcd
    s1.print();

    name[2] = 'e';
    student s2(40, name); // 40 abed
    s2.print();
    // hence changes made will not reflect in deep copy
    s1.print(); // 23 abcd

    return 0;
}

// copy constructor with pre shallow copy

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    char *name;
    // this is optional to write bcoz same thing hapenning automatiocally // also this is shallow copy
    // student(student &a){
    //     this->age=a.age;
    //     this->name=a.name;
    // }

    // so for deep copy  //we have create by ourself otherwise it always shallow copy
    student(int age, char *name)
    {
        this->age = age;
        // deep copy // +1 is for adding a null char at end
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void print()
    {
        cout << age << " " << name << endl;
    }
};
int main()
{
    char name[] = "abcd";
    student s1(23, name);
    s1.print();     // 23 abcd
    student s2(s1); // s2 will copy same name address of s1;//hence shallow copy
    s2.name[2] = 'e';
    s2.print(); // 23 abed
    s1.print(); // 23 abed

    return 0;
}

// copy constructor with deep copy

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    char *name;
    student(student &a)
    {
        this->age = a.age; // or age=a.age;
        // deep copy
        this->name = new char[strlen(a.name) + 1];
        strcpy(this->name, a.name);
    }
    student(int age, char *name)
    {
        this->age = age;
        // deep copy // +1 is for adding a null char at end
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void print()
    {
        cout << age << " " << name << endl;
    }
};
int main()
{
    char name[] = "abcd";
    student s1(23, name);
    s1.print();     // 23 abcd
    student s2(s1); // now s2 will not copy same name address of s1 it will create a new dynamic loc with name //hence deep copy
    s2.name[2] = 'e';
    s2.print(); // 23 abed
    s1.print(); // 23 abcd

    return 0;
}

// defining memeber function outside the class

#include <bits/stdc++.h>
using namespace std;
class a
{
    int age;

public:
    void print();
    void setage(int age);
};
void a::setage(int age)
{
    this->age = age;
}
void a::print()
{
    cout << age;
}
int main()
{
    a s1;
    s1.setage(23);
    s1.print();
    return 0;
}

// INITILIZATION LIST

// as we know we have to give vaue to constant , refernce variable at the time of creation / initilization
// after that its not alloweed

// i.e

// int const a;   //ERROR
// a=4;
// int const a=4 // this one is correcct

// int &a;    //error
// a=34;
// int &a =34;  // correct

// #include <bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//     int const rollno;  //error
// WE CAN DO  int const rollno=101; //but it repeat for all obj
// };
// int main()
// {
//     student s1;
//     s1.rollno=24;  //error
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student {
//     public:
//     int const rollno;
//     student (int r){
//         rollno=r;  //error bccause it will not assign on initilization
//     }
// };
// int main()
// {
//     student s1(28);
//     return 0;
// }

// hence we use initilization list (this will give/assign value at time of initilization)

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int const rollno;
    student(int r) : rollno(r)
    {
        cout << rollno;
    };
};
int main()
{
    student s1(28);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int const rollno;
    int age;
    int &a;
    student(int r, int age) : rollno(r), age(age), a(this->age)
    {
        cout << rollno << " " << age << " " << a;
    }
};
int main()
{
    student s1(28, 21); // 28 21 21
    return 0;
}

/// constant object
// student const s1;
// constant object can't call any normal function // coz compiler fear it may change the data
// but u can call constant function using constant object
// const function : which donot change any property of current object

// example of const function

// void getnumerator() const
// {
//     return numerator;
// }

// hence
// s1.getnumerator();   is allowed

#include <bits/stdc++.h>
using namespace std;

class Student
{
    int rollNumber;

public:
    int age;

    Student(int r)
    {
        rollNumber = r;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }
};

int main()
{
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
}

/// static data members
// static data members ki copy object me nhi bnati only class m bnati h , so object can't access those using  . operator
// s1.totalstudent ; //error

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    int rollno;
    static int totalstudent;
};
int student ::totalstudent = 70;
int main()
{
    student s1;
    s1.age = 21;
    s1.rollno = 28;
    s1.totalstudent = 90;                                                                                  // error if static data member is not initialize outside the class //if initialize u can change its value and class value also change wrt to obj
    cout << s1.age << " " << s1.rollno << " " << student ::totalstudent << " " << s1.totalstudent << endl; // 21 28 90 90

    student s2;
    s2.age = 23;
    s2.rollno = 59;
    cout << s2.age << " " << s2.rollno << " " << student ::totalstudent << " " << s2.totalstudent << endl; // 23 59 90 90
    return 0;
}

// now creation a program whichh update the totalstudent value each time when a new object is created;

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    int rollno;
    static int totalstudent;
    student()
    {
        totalstudent++;
    }
    int student ::totalstudent = 0;
    int main()
    {
        student s1;
        s1.age = 21;
        s1.rollno = 28;
        cout << s1.age << " " << s1.rollno << " " << student ::totalstudent << " " << s1.totalstudent << endl; // 21 28 1 1
        student s2;
        s2.age = 23;
        s2.rollno = 59;
        cout << s2.age << " " << s2.rollno << " " << student ::totalstudent << " " << s2.totalstudent << endl; // 23 59 2 2

        student s3, s4, s5;
        cout << s3.age /*will produce garbage value*/ << " " << s2.rollno << " " << student ::totalstudent << " " << s2.totalstudent << s5.totalstudent << endl; // 64222 59 5 5 5

        return 0;
    }

    /// static member function
    // static member function can only access static properties
    // you can define the function inside or outside;
    // aslo u may or may not initiaize it outside the class but static data member is must to initialize outside the class

#include <bits/stdc++.h>
    using namespace std;
    class student
    {
    private:
        static int totalstudent;

    public:
        student()
        {
            totalstudent++;
        }
        static int totaladdmission()
        {
            return totalstudent;
        }
    };
    int student ::totalstudent = 0;
    // void student ::totaladdmission();
    // {
    //     return totalstudent; // cant be used coz its private
    // }
    int main()
    {
        student s1;
        cout << student ::totaladdmission() << endl; // 1
        student s2, s3, s4, s5;
        cout << student ::totaladdmission() << endl; // 5
        return 0;
    }

    // operator overloading

    // i.e  fraction f3=f1.add(f2);

#include <bits/stdc++.h>
    using namespace std;
    class fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        fraction(int numerator, int denominator)
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
        fraction add(fraction const &f2)
        {
            int lcm = denominator * f2.denominator;
            // or
            //  int lcm =this-> denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;
            int num = x * numerator + (y * f2.numerator);
            // numerator = num;
            // denominator = lcm;
            fraction fnew(num, lcm);
            fnew.simplify();
            return fnew;
        }
    };
    int main()
    {
        fraction f1(23, 10);
        fraction f2(18, 7);
        fraction f3 = f1.add(f2);
        f1.print();
        f2.print();
        f3.print();
        return 0;
    }

    //  now for fraction f4=f1+f2;

#include <bits/stdc++.h>
    using namespace std;
    class fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        fraction(int numerator, int denominator)
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
        fraction operator+(fraction const &f2)
        {
            int lcm = denominator * f2.denominator;
            // or
            //  int lcm =this-> denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;
            int num = x * numerator + (y * f2.numerator);
            // numerator = num;
            // denominator = lcm;
            fraction fnew(num, lcm);
            fnew.simplify();
            return fnew;
        }
    };
    int main()
    {
        fraction f1(23, 10);
        fraction f2(18, 7);
        fraction f3 = f1 + f2;
        f1.print();
        f2.print();
        f3.print();
        return 0;
    }

#include <iostream>

    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int num, int den) : numerator(num), denominator(den) {}

        Fraction operator+(const Fraction &other) const
        {
            int resultNum = (numerator * other.denominator) + (other.numerator * denominator);
            int resultDen = denominator * other.denominator;
            return Fraction(resultNum, resultDen);
        }

        void simplify()
        {
            int gcd = computeGCD(numerator, denominator);
            numerator /= gcd;
            denominator /= gcd;
        }

        void display() const
        {
            std::cout << numerator << "/" << denominator;
        }

    private:
        int computeGCD(int a, int b) const
        {
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }
    };

    int main()
    {
        Fraction fraction1(3, 4);
        Fraction fraction2(1, 2);

        Fraction sum = fraction1 + fraction2;
        sum.simplify();

        fraction1.display();
        std::cout << " + ";
        fraction2.display();
        std::cout << " = ";
        sum.display();

        return 0;
    }

#include <iostream>

    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

        Fraction(const Fraction &other)
        {
            numerator = other.numerator;
            denominator = other.denominator;
        }

        Fraction add(const Fraction &other) const
        {
            int num = numerator * other.denominator + other.numerator * denominator;
            int denom = denominator * other.denominator;
            return Fraction(num, denom);
        }

        void display() const
        {
            std::cout << numerator << "/" << denominator << std::endl;
        }
    };

    int main()
    {
        Fraction f1(1, 4);
        Fraction f2(3, 8);

        Fraction sum = f1.add(f2);

        std::cout << "f1: ";
        f1.display();

        std::cout << "f2: ";
        f2.display();

        std::cout << "Sum: ";
        sum.display();

        return 0;
    }

#include <iostream>

    class MyNumber
    {
    private:
        int value;

    public:
        MyNumber(int val = 0) : value(val) {}

        // Overloading pre-increment operator (++obj)
        MyNumber &operator++()
        {
            value++;
            return *this;
        }

        // Overloading post-increment operator (obj++)
        MyNumber operator++(int)
        {
            MyNumber temp(*this);
            ++(*this);
            return temp;
        }

        int getValue() const
        {
            return value;
        }
    };

    int main()
    {
        MyNumber num(5);

        std::cout << "Original value: " << num.getValue() << std::endl;

        // Pre-increment
        ++num;
        std::cout << "After pre-increment: " << num.getValue() << std::endl;

        // Post-increment
        num++;
        std::cout << "After post-increment: " << num.getValue() << std::endl;

        return 0;
    }

    // dynamic array

#include <iostream>

    int main()
    {
        int size;
        std::cout << "Enter the size of the array: ";
        std::cin >> size;

        int *dynamicArray = new int[size]; // Creating dynamic array

        // Initializing array elements
        for (int i = 0; i < size; ++i)
        {
            dynamicArray[i] = i + 1;
        }

        // Accessing and printing array elements
        std::cout << "Array elements: ";
        for (int i = 0; i < size; ++i)
        {
            std::cout << dynamicArray[i] << " ";
        }
        std::cout << std::endl;

        // Deallocating dynamic array
        delete[] dynamicArray;

        return 0;
    }

#include <iostream>

    class Polynomial
    {
    private:
        int degree;
        int *coefficients;

    public:
        Polynomial(int deg = 0) : degree(deg), coefficients(new int[degree + 1]) {}

        Polynomial(const Polynomial &other) : degree(other.degree), coefficients(new int[other.degree + 1])
        {
            for (int i = 0; i <= degree; ++i)
            {
                coefficients[i] = other.coefficients[i];
            }
        }

        ~Polynomial()
        {
            delete[] coefficients;
        }

        Polynomial &operator=(const Polynomial &other)
        {
            if (this == &other)
            {
                return *this;
            }

            delete[] coefficients;
            degree = other.degree;
            coefficients = new int[degree + 1];

            for (int i = 0; i <= degree; ++i)
            {
                coefficients[i] = other.coefficients[i];
            }

            return *this;
        }

        void setCoefficient(int index, int value)
        {
            if (index >= 0 && index <= degree)
            {
                coefficients[index] = value;
            }
        }

        void display() const
        {
            for (int i = degree; i >= 0; --i)
            {
                std::cout << coefficients[i] << "x^" << i;
                if (i != 0)
                {
                    std::cout << " + ";
                }
            }
            std::cout << std::endl;
        }
    };

    int main()
    {
        Polynomial p1(3);
        p1.setCoefficient(0, 2);
        p1.setCoefficient(1, 1);
        p1.setCoefficient(2, -3);
        p1.setCoefficient(3, 4);

        Polynomial p2 = p1; // Copy constructor

        std::cout << "Polynomial p1: ";
        p1.display();

        std::cout << "Polynomial p2 (copy of p1): ";
        p2.display();

        return 0;
    }

#include <iostream>

    class Polynomial
    {
    private:
        int degree;
        int *coefficients;

    public:
        Polynomial() : degree(0), coefficients(nullptr) {}

        Polynomial(int deg) : degree(deg)
        {
            coefficients = new int[degree + 1];
            for (int i = 0; i <= degree; ++i)
            {
                coefficients[i] = 0;
            }
        }

        Polynomial(const Polynomial &other) : degree(other.degree)
        {
            coefficients = new int[degree + 1];
            for (int i = 0; i <= degree; ++i)
            {
                coefficients[i] = other.coefficients[i];
            }
        }

        Polynomial &operator=(const Polynomial &other)
        {
            if (this != &other)
            {
                delete[] coefficients;

                degree = other.degree;
                coefficients = new int[degree + 1];
                for (int i = 0; i <= degree; ++i)
                {
                    coefficients[i] = other.coefficients[i];
                }
            }
            return *this;
        }

        void setCoefficient(int index, int value)
        {
            if (index >= 0 && index <= degree)
            {
                coefficients[index] = value;
            }
        }

        int getCoefficient(int index) const
        {
            if (index >= 0 && index <= degree)
            {
                return coefficients[index];
            }
            return 0;
        }

        void display() const
        {
            for (int i = degree; i >= 0; --i)
            {
                int coeff = coefficients[i];
                if (coeff != 0)
                {
                    std::cout << coeff << "x^" << i;
                    if (i != 0)
                    {
                        std::cout << " + ";
                    }
                }
            }
            std::cout << std::endl;
        }

        ~Polynomial()
        {
            delete[] coefficients;
        }
    };

    int main()
    {
        Polynomial p1(3);
        p1.setCoefficient(0, 2);
        p1.setCoefficient(1, 4);
        p1.setCoefficient(2, 1);
        p1.setCoefficient(3, 3);

        Polynomial p2 = p1; // Copy constructor

        Polynomial p3;
        p3 = p1; // Copy assignment operator

        p1.display();
        p2.display();
        p3.display();

        return 0;
    }
