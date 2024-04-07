# Write a function that identifies if a given string is a valid IP address, using regular expressions. 
# (An IP address is generally four numbers separated by dots. Each number can range from 0 to 255.)

import re
string=input("Enter a string:")
pattern="(([0-9]{1,3})\.([0-9]{1,3})\.([0-9]{1,3})\.([0-9]{1,3}))"
if(re.match(pattern,string)):
    print("Valid")
else:
    print("Invalid")

