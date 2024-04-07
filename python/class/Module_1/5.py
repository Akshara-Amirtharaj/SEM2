#Generate the Fibonacci series up to N. Obtain the value of N from the user
n=int(input("Enter the value of N:"))
t1=0
t2=1
c=0
print(t1)
print(t2)
for i in range(n):
    c=t1+t2
   
    print(c)
    t1=t2
    t2=c
    
