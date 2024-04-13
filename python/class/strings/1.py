#. Check if the given string is a valid name (That is, the string should only
#contain alphabets and possibly a ‘.’ and spaces)

string=input("Enter a string:")
count=0
for i in string:
    if i=="." or i==" " or i.isalpha():
        count =0
    else:
        count =1
        break
if(count==0):
    print("It's a valid name")
else:
    print("It's not a valid name")