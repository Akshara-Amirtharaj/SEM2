#Write a program to print Floyd’s triangle with the number of rows specified by the user.
#Floyd’s triangle with 4 rows is as follows:
#1
#2 3
#4 5 6  
#7 8 9 10

num=1
n=int(input("Enter the number of rows:"))
for i in range(1,n+1):
    for j in range(i):
        print(num,end=" ")
        num+=1
    print()