sum = 0
for x in range(10,1000):
    for y in (2,x):
        if x%y==0:
            break
        else:
            sum=sum+x
            print(x,"Is The Prime Number ")
            print("Total Prime Number : ",sum)
