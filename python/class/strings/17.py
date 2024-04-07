#Find the smallest substring that contains all the characters of the give string
string=input("Enter a string:")
string2=""
for char in string:
    if char not in string2:
        string2+=char
if string2 in string:
    print(string2)
else:
    print("There's no substring with all the characters")