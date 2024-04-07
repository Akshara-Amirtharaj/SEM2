#. Find the number of words in a given string.
string=input("Enter a string:")
count=0
for char in string:
    if(char==" "):
        count+=1
print(count+1)