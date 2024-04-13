#Accept a sentence from a user and capitalize the first letter of each word
string=input("Enter the string:")
string1=""
lst=string.split()
print(lst)
for i in lst:
    text=str(i)
    string1 +=" "+ text.capitalize()
print(string1)