import re
string=input("Enter a string:")
if(re.search("^[A-Za-z0-9.-_]+@[A-Za-z0-9-]+\.[a-zA-Z.]{2,}$",string)):
    print("Valid")
else:
    print("Invalid")