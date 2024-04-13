#Sort the characters of a given string (of alphabets) in alphabetical order.
str=input("Enter a string")
lst=[]
temp=0

if str.isalpha():
    lst=list(str)
    for i in range(len(str)):
        for j in range(len(lst)-1):
            if(lst[j].lower()>lst[j+1].lower()):
                temp=lst[j]
                lst[j]=lst[j+1]
                lst[j+1]=temp
    print(*lst,sep="")
else:
    print("Invaid")
