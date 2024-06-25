print("Hello World "," Welcome python ",sep="&",end="|\n")
var = 'Hello World'
print('My sentence is '+var)
id(var)
import sys
print(sys.getsizeof(var))
name = "Abir"
print(name)
x,y,z = 10,20,30
print(x)
print(y)
print(z)
x = 2
X = 1
print(x)
print(X)

#function
t = 1000
def func1():
    print("My num is :",t)
func1()

#String
data = "Data Science Fun"
print(type(data))
data = input()
print(data)

x = int(input("Enter your first number : ")) #input value
print(x)

data = "There are many birds in our country"
print(len(data)) #String length
import sys
print(sys.getsizeof(data))
data1 = "python python of of"
print(data1.count('python')) #same value count
sub = 'of'
print(data1.count(sub))
print(data1.find(sub)) #Find value from string
print(data1.find('y',3,10)) #Find value for range
print(data1.index('p')) #index value find
print(data1.lower()) #convert all lower case
print(data1.upper()) #convert all upper case

a = "dat SCEINCE is fUn"
print(a.casefold()) #lower
print(a.capitalize()) #convert only first char into upper case
print(a.swapcase()) #small letter to upper letter and upper letter to small letter
print(a.title()) #sapace to sapce 1st letter upper letter 
print(a.islower()) #all char have small ,if yes true others false
print(a.isupper()) #all char have capital ,if yes true others false
print(a.encode()) #byte
print(type(a.encode())) #byte
print(a.split()) #pottek word k alada alada kore dakha be
#a.split()[index number]
print(a.split()[2])
#a.center(digit) ; digit number er center a dakhabe
print(a.center(50))
#a.replace("word","word")
print(a.replace("Data","The"))
#Format output
z = 20
print("I have {} taka".format(z))

#ALL Data Types
#Numerical Data Types

