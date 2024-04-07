#Check if a given substring is present in a given string.

string=input("Enter a string:")
sub=input("Enter the substring:")
count =0
if sub in string:
    count=1
if count==1:
    print("The substring is present in the string")
else:
    print("It's not")