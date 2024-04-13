import re
string=input("Enter a string:")
if(re.search("^[A-Z a-z][0-9]{3}[_][A-Z a-z]{2,}$",string)):
    print("It's a valid string")
else:
    print("Invalid string")
