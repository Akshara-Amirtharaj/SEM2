n=int(input("Enter the number of rows:"))
space=n
for i in range(n+1):
    for k in range(space):
        print(" ",end="")
    num=1
    for j in range(i):
       print(num,end=" ")
       num=num+1
    print()
    space-=1
space1=1
for i in range(n,0,-1):
    for k in range(space1,1,-1):
        print(" ",end="")
    num=1
    for j in range(i):
        print(num,end=" ")
        num=num+1
    print()
    space1+=1