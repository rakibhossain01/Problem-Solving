x = int(input("First number : "))
y = int(input("Second number : "))
z = int(input("Third number : "))

if x>=y & x>=z:
    print("X is greater than y and z")
elif y>=x and y>=z:
    print("Y is greater than x and z")
elif z>=x and z>=y:
    print("Z is greater than x and y")
else:
    print("Equal")