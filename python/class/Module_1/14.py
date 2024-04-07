# Hollow triangle
n=int(input("Enter the number of rows:"))
for i in range(n):
    num=1
    for j in range(n):
       if(j==0 or i==j or i==n-1 or j==n-1 or j==n-1-i or i+j==n-1 or i==0):
          print(num,end="  ")
          
       else:
           print(" ",end="  ")

       num+=1
    print()