
1 finding maximum from a list Using max() function

a=[12, 65, 54, 39, 102, 37, 72, 33, 5, -28, 0, 15]
print(max(a)) #102

2 GCD of two number.

a=int(input('Enter number 1:'))
b=int(input('Enter number 2:'))
def gcd(x,y):
    if(x==0 or y==0):
        return 0
    elif(x==y):
        return x
    elif(x>y):
        return gcd(x-y,y) #recursive call for gcd function
    else:
        return gcd(x,y-x)
print(gcd(a,b))

3 To find square root of a number.

from cmath import sqrt
a = int(input("Enter a number:"))
if(a<0):
    print('Square root is not possible.')
else:
    print('Square root is:',sqrt(a))


4 To check a number is prime or not.
a = int(input('Enter the number:'))
flag=0
if(a == 2):
    flag = 1
for i in range(2,a):
    if(a%i==0):
        flag = 0
        break
    else:
        flag = 1
if(flag==0):
    print(a,'is not a prime number.')
else:
    print(a,'is a prime number.')




5 Print first N prime numbers

upto = int(input("Find prime numbers upto : "))
print("\nAll prime numbers upto", upto, "are : ")
for num in range(2, upto + 1):
    i = 2
    for i in range(2, num):
        if(num % i == 0):
            i = num
            break;
    if(i != num):
        print(num, end=" ")




6 To remove duplicate numbers from list.
def duplicate(list):
    dup =[]
    for i in list:
        if(i not in dup):
            dup.append(i)
    return dup
list = [1,1,1,2,3,3,3,4,4,4,5]
s = duplicate(list)
print(s)

7 Print the Fibonacci series.
def fib(n):
    if (n == 0 or n == 1):
        return 1
    else:
        return fib(n-1)+fib(n-2)
n = int(input('Enter the elements of fibonacci series:'))
for i in range(n):
    print(fib(i), end=' ')


8 Assignments to perform various operations on Strings like creation, deletion, concatenation.

# creation
str1 = 'string creation '
print(str1)

# deletion
string = "Python"
del string
print(string)

# concatenation
string1 = "DEEP"
string2 = "jangra"
string3 = string1+string2
print(string3)

9 Create a List L = [10, 20, 30]. Write programs to perform following 
operations: a. Insert new numbers to list L. 
b. Delete numbers from list L. 
c. Sum all numbers in list L. 100 
d. Sum all prime numbers in list L. 
e. Delete the list L.


lst = [10,11,20,31,30]
num = int(input('Enter an integer:'))
lst.append(num)
print(lst)
#Method 1
lst.pop() #deletes last element
print(lst)
lst.append(num)
#Method 2
lst.pop(2) #delete the element at index 2
print(lst)
#Method 3
lst.remove(num)#delete the particular element
print(lst)
lst.append(20)
lst.append(num)
print(lst)
# -------------------- Sum of all numbers in List -----------------------
sum = 0
for i in lst:
    sum += i
print("Sum of all elements is:",sum)

#--------------------- Sum all prime numbers in List -----------------------
total =0
flag=1
for i in lst:
    if i>1:
        for j in range(2,i):
            if(i%j == 0):
                break
            else:
                total = total+i
print('Sum of all primes in list is:',total)
del lst #deletion of list
print(lst)
OUTPUT:


10 Create a Dictionary D= {‘Name’: ‘Allen’, ‘Age’: 27, 5:123456}. Write programs to perform following operations: 
a. Insert new entry in D.
b. Delete an entry from D. 
c. Check whether a key present in D.
d. Update the value of a key.
e. Clear dictionary D.


D = {'Name':'Allen','Age':27,5:123456}
print(type(D))
D['Address'] = 'Hisar' #inserting a new element
print(D)
D.pop(5) #deletion by pop
print(D)
D.popitem() #delete the last inserted element
print(D)
del D['Age'] #deletion by del keyword
print(D)
#function for key check
def check(dic,key):
    if key in dic.keys() :
        print('Present ,' , end=' ')
        print("value = " ,dic[key])
    else:
        print('Not Present')
key = "Name"
check(D,key)
key ="Age"
check(D,key)
D.update({'Name':'Alice'}) #updation of key value
print(D)
D.clear() #clear dictionary
print(D)
OUTPUT:


11 Program on Sets to perform various operation like union, intersection, difference .
set1 = set() #creating sets
set2 = set()
for i in range(5):
    set1.add(i)
for i in range(3,9):
    set2.add(i)
print('Set 1:',set1)
print('Set 2:',set2)
#union by method
numbers = set1.union(set2)
print(numbers)
#union by | operator
numbers = set1|set2
print('Union by | operator: ' ,numbers)
#intersection by method
num = set1.intersection(set2)
print(num)
#interseection by & operator
num = set1 & set2
print('Intersection by & operator: ',num)
#difference by method
diff = set1.difference(set2)
print(diff)
#difference by - operator
print("Difference by - operator: ",set1 - set2)
OUTPUT:


12 Program related to searching operation.
lst = [] 
for i in range(20):
    lst.append(i)
print(lst)
#linear search
def lnsearch(lst,key):
    flag = 0
    for i in range(len(lst)): 
        if key==lst[i]:
            print('Key is present at ',i+1,"'th position of list.")
            flag=1
            break
    if(flag==0):
        print("Key is not present.")
key = 13
lnsearch(lst,key)
key = 21
lnsearch(lst,key)

#binary search
def bnsearch(lst,key):
    low = 0
    high = len(lst)-1
    mid=0
    while(low<=high):
        mid = (low+high)//2
        if(key>lst[mid]):
            low=mid+1
        elif(key<lst[mid]):
            high=mid-1
        else:
            return print('Element is present at',mid,"'th position of list.")
    return print("Element is not present.")
key = 15
bnsearch(lst,key)
key = 32
bnsearch(lst,key)

OUTPUT:


13 Program related to sorting.
print("-------------------------------Insertion Sort------------------------------")
def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
    while j >=0 and key < arr[j] :
        arr[j+1] = arr[j]
        j -= 1
    arr[j+1] = key
arr = [12, 11, 13, 5, 6]
insertionSort(arr)
print('Insertion Sort results:' ,arr)
print("--------------------------------Selection Sort------------------------------")
def selectionSort(array, size): 
    for ind in range(size):
        min_index = ind
        for j in range(ind + 1, size):
            # select the minimum element in every iteration
            if array[j] < array[min_index]:
                min_index = j
        #swapping the elements to sort the array
        (array[ind], array[min_index]) = (array[min_index], array[ind])
arr = [-2, 45, 0, 11, -9,88,-97,-202,747]
size = len(arr)
selectionSort(arr, size)
print("Selection Sort results",arr)
print("--------------------------------Bubble Sort---------------------------------")
def bubbleSort(arr):
    n = len(arr)
    swapped = False
    for i in range(n-1):
        for j in range(0, n-i-1):
            if arr[j] > arr[j + 1]:
                swapped = True
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
        if not swapped:
            return
arr = [64, 34, 25, 12, 22, 11, 90]
bubbleSort(arr)
print("Sorted array by bubble sort:")
for i in range(len(arr)):
    print("% d" % arr[i], end=" ")
OUTPUT:


14 Demonstrate the use of dictionary for measuring student 
marks in five subjects and you have to find the student having 
maximum, minimum and average marks.
subjects = ['Mathematics','English','Hindi','Science','Social Science']
marks = []
for i in subjects:
    print('Enter marks of ',i,':')
    ele = int(input()) 
    marks.append(ele)
dict = dict() #initialize a dictionary
for key in subjects:
    for value in marks:
        dict[key] = value #adding element to dictionary
        marks.remove(value) #remove added value from list
        break
print('Dictionary:',dict)
print("Maximum marks obtained is:",max(dict.values()))
print("Minimum marks obtained is:",min(dict.values()))
print("Average marks:",sum(dict.values())/5)
OUTPUT:


15 Program on usage of different available packages like random package to perform 
a. Print N random numbers ranging from 100 to 500. 
b. Print 10 random strings whose length between 3 and 5.
import random
from random import randrange
import string
print("Part A")
n = int(input("Enter number of random numbers:"))
for i in range(n):
    print(randrange(100,501))
print("\tPart B")
for i in range(10): 
    random_string = ''
for _ in range(3,6):
    # Considering only upper and lowercase letters
    random_integer = random.randint(97, 97 + 26 - 1)
    flip_bit = random.randint(0, 1)
    # Convert to lowercase if the flip bit is on
    random_integer = random_integer - 32 if flip_bit == 1 else random_integer
    # Keep appending random characters using chr(x)
    random_string += (chr(random_integer)) 
print('\t',random_string, len(random_string))
OUTPUT:


16 Program on usage of package such as Numpy, Pandas.
print("Numpy Usage:")
import numpy as np
arr1 = np.array([[4, 7], [2, 6]], 
    dtype = np.float64) # First Array
arr2 = np.array([[3, 6], [2, 8]], 
    dtype = np.float64) # Second Array
Sum = np.add(arr1, arr2) # Addition of two Arrays
print("Addition of Two Arrays: ")
print(Sum) 
# Addition of all Array elements
Sum1 = np.sum(arr1) # using predefined sum method
print("\nAddition of Array elements: ")
print(Sum1) 
Sqrt = np.sqrt(arr1) # Square root of Array
print("\nSquare root of Array1 elements: ")
print(Sqrt) 
Trans_arr = arr1.T # Transpose of Array using In-built function 'T'
print("\nTranspose of Array: ")
print(Trans_arr)
print('Panda Usage:')
import pandas as pd
df = pd.DataFrame() # Calling DataFrame constructor
print(df)
lst = ['Geeks', 'For', 'Geeks', 'is','portal', 'for', 'Geeks']
df = pd.DataFrame(lst) # Calling DataFrame constructor on list
print(df)


OUTPUT:
Numpy Usage:
Addition of Two Arrays: 
[[ 7. 13.]
[ 4. 14.]]
Addition of Array elements: 
19.0
Square root of Array1 elements: 
[[2. 2.64575131]
[1.41421356 2.44948974]]
Transpose of Array: 
[[4. 2.]
[7. 6.]]
Panda Usage:
Empty DataFrame
Columns: []
Index: []
 0
0 Geeks
1 For
2 Geeks
3 is
4 portal
5 for
6 Geeks
** Process exited - Return Code: 0 **
Press Enter to exit terminal
17 Program to implement and demonstrate the functions of a simple 
calculator.
# This function adds two numbers
def add(x, y): return x + y
# This function subtracts two numbers
def subtract(x, y): return x - y
# This function multiplies two numbers
def multiply(x, y): return x * y
# This function divides two numbers
def divide(x, y): return x / y
print("Select operation.")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")
while True:
    choice = input("Enter choice(1/2/3/4): ")
    # check if choice is one of the four options
    if choice in ('1', '2', '3', '4'):
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        if choice == '1':
            print(num1, "+", num2, "=", add(num1, num2))
        elif choice == '2':
            print(num1, "-", num2, "=", subtract(num1, num2))
        elif choice == '3':
            print(num1, "*", num2, "=", multiply(num1, num2))
        elif choice == '4':
            print(num1, "/", num2, "=", divide(num1, num2))
# check if user wants another calculation
# break the while loop if answer is no
        next_calculation = input("Let's do next calculation? (yes/no): ")
        if next_calculation == "no":
            break
        else:
            print("Invalid Input")
OUTPUT:


18 Program to implement OOPS concepts.
print('implementing inheritance')
class Bird: #creating class
    def __init__(self):
        print('Bird is ready.')
    def who(self): #method of class
        print('Bird')
    def fly(self):
        print('Bird is flying high.')
class Penguin(Bird): #derived class
    def __init__(self):
        super().__init__() #call super function
        print('Penguin is ready.')
    def who(self):
        print('Penguin')
    def run(self):
        print('Penguin is running fast.')
a = Penguin() #initialize object
a.who()
a.fly()
a.run()
print('Implementing encapsulation')
class encapsulate:
    def __init__(beni):
        beni.__a = 10 #private variable
    def display(beni):
        print('Value of a:{}'.format(beni.__a))
    def change(beni,b):
        beni.__a = b
c = encapsulate() 
c.display()
c.__a = 30 #try to change a outcide class
c.display()
c.change(30) #changing a in class
c.display()
print()
print('Implementing polymorphism')
class Parrot:
    def fly(self):
        print("Parrot can fly")
    def swim(self):
        print("Parrot can't swim")
class Penguin:
    def fly(self):
        print("Penguin can't fly")
    def swim(self):
        print("Penguin can swim")
def flying_test(bird): # common interface
    bird.fly()
blu = Parrot()
peggy = Penguin()
flying_test(blu)
flying_test(peggy) # passing the object
OUTPUT:



19 Program on file handling that how data is read and write
to a file.


obj2 = open("number.txt","r") #open file for reading
obj1 = obj2.read() #reading file
print(obj1)
obj2.close()
obj3 = open("number.txt","w") #open file to write
obj1 = obj3.write("Hello Dear, This is pyhton file handing.")
obj3.close() #closing file
obj2 = open("number.txt","r") #open file for reading
obj1 = obj2.read() #reading file
print(obj1)
obj2.close()


print("this is written to file")
print("hello dear, this is python file handling")
print()