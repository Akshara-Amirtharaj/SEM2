#Print all numbers between 1 and N (specified by the user) which when
#divided by a number, M, specified by the user will result in a remainder of
#5. Count the number of values that satisfy the condition and compute their
#average and print it


n=int(input("Enter the value of N:"))
m=int(input("Enter the value of M:"))
for i in range(1,n):
    if(i%m==5):
      print(i)