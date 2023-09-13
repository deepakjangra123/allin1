# Python code to create a file
file = open('geek.txt','w')
file.write("This is the write command")
file.write("It allows us to write in a particular file")
file.close()


# Python code to illustrate read() mode character wise
file = open("geek.txt", "r")
print (file.read(6))  #This i
print (file.read())    #s the write commandIt allows us to write in a particular file

# Python code to illustrate append() mode
file = open('geek.txt', 'a')
file.write("This will add this line")
file.close()



file = open("geek.txt", "r")
print (file.read())  #This is the write commandIt allows us to write in a particular fileThis will add this line
print (file.readline()) 
print (file.readlines()) 

q