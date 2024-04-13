#pascal triangle
n=int(input("Enter the number of rows:"))
space=n-1
for i in range(n+1):
    for k in range (space):
        print(" ",end=" ")
    val=1
    for j in range(i+1):
        if(j==0 or j==i):
            print("1",end="  ")
        else:
          val=val*(i-j+1)/j
          print(int(val),end="  ")
    print()
    space-=1