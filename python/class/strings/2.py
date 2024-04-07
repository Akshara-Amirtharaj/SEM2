#Count the number of uppercase letters, lowercase letters, digits, and special characters in the given string.

string=input("Enter a string")
upper=0
lower=0
special=0
space=0
for i in string:
    if i.isupper():
        upper+=1
    elif i.islower():
        lower+=1
    elif i==" ":
        space+=1
    else:
        special+=1
print("The count of the characters are:")
print("Upper=",upper)
print("Lower=",lower)
print("Special=",special)
print("Space=",space)