string=input("Enter a string:")
n=int(input("Enter the value of n:"))
count=0
for char in string:
    print(char,end="")
    count+=1
    
    if count==n:
        print()
        count=0
    