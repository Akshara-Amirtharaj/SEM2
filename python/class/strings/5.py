#Remove the ith character in a string

string=input("Enter a string:")
index=int(input("Enter the index:"))
len=len(string)
lst=list(string)
lst.pop(index)
print(*lst,sep="")