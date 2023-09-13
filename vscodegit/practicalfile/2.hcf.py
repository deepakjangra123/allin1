a = int(input('Enter the number:'))
    flag = 0
if (a == 2):
    flag = 1   
for i in range(2, a):
if (a % i == 0):
flag = 0
break
else:
flag = 1
if (flag == 0):
print(a, 'is not a prime number.')
else:
print(a, 'is a prime number.')
