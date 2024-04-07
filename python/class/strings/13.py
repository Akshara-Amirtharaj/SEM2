string1=input("Enter a string:")
string=list(string1)
string2=""
temp=0
for i in range(len(string)):
    for j in range(len(string)-1):
        if(string.count(string[j+1])>string.count(string[j])):
            temp=string[j]
            string[j]=string[j+1]
            string[j+1]=temp
for char in string:
    if char not in string2:
        string2+=char
print(*string,sep="")
print(string2)