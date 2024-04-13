#Check if a given string can be made empty by recursively deleting a given substring
string=input("Enter a string:")
sub=input("Enter a substirng:")
string1=""
while sub in string:
    string=string.replace(sub,"")
print(string)