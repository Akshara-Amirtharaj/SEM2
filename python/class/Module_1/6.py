#Display the odd numbers among N integers obtained from the user. Display the odd numbers in the same line, separated by a comma
n=int(input("Enter teh value of n:"))
lst=[]
for i in range(n):
    if(i%2!=0):
     lst.append(i)
print(*lst,sep=",")