print("Hello, Deep!")
# Hello, Deep!

if 5 > 2:
    print("Five is greater than two!")
# Five is greater than two!

x = 5
y = "Hello, World!"
print(x)
print(y)
# 5
# Hello, World!

"""
This is a multiline comment
written in
more than just one line
"""

x = 4
x = "Sally"
print(x)
# Sally


x = str(3)
y = int(3)
z = float(3)
print(x)  # 3
print(y)  # 3
print(z)  # 3.0


x = 5
y = "John"
print(type(x))  # <class 'int'>
print(type(y))  # <class 'str'>


x = "John"
print(x)  # John
# double quotes are the same as single quotes:
x = 'John'
print(x)  # John


a = 4
A = "Sally"
print(a)  # 4
print(A)  # Sally


myvar = "John"
my_var = "John"
_my_var = "John"
myVar = "John"
MYVAR = "John"
myvar2 = "John"
print(myvar)
print(my_var)
print(_my_var)
print(myVar)
print(MYVAR)
print(myvar2)


# camel case
myVariableName = "John"

# pascal case
MyVariableName = "John"

# snake case
my_variable_name = "John"


# Many Values to Multiple Variables
x, y, z = "Orange", "Banana", "Cherry"
print(x)  # Orange
print(y)  # Banana
print(z)  # Cherry


# One Value to Multiple Variables
x = y = z = "Orange"
print(x)  # Orange
print(y)  # Orange
print(z)  # Orange


# Unpack a Collection
fruits = ["apple", "banana", "cherry"]
x, y, z = fruits
print(x)  # apple
print(y)  # banana
print(z)  # cherry


x = "Python is awesome"
print(x)  # Python is awesome


x = "Python"
y = "is"
z = "awesome"
print(x, y, z)  # Python is awesome
print(x, y, z)  # Python is awesome


x = "Python "
y = "is "
z = "awesome"
print(x + y + z)  # Python is awesome


x = 5
y = 10
print(x + y)  # 15


x = 5
y = "John"
print(x + y)  # error


x = 5
y = "John"
print(x, y)  # 5 John


x = "awesome"
def myfunc():
    print("Python is " + x)
myfunc()  # Python is awesome


x = "awesome"
def myfunc():
    x = "fantastic"
    print("Python is " + x) #Python is fantastic
myfunc()
print("Python is " + x) #Python is awesome



def myfunc():
    global x
    x = "fantastic"
myfunc()
print("Python is " + x)  #Python is fantastic



x = "awesome"
def myfunc():
    global x
    x = "fantastic"
myfunc()
print("Python is " + x)  #Python is fantastic

