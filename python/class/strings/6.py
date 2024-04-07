#Print the characters in a string, after removing duplicates, and find the frequency of occurrence of each character.

string1=input("Enter a string:")
string2=""
for char in string1:
    if char not in string2:
        string2+=char
        print(char,"count=",string1.count(char))