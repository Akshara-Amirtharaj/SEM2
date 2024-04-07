#Find the characters in a string that appear an odd number of times.
string=input("Enter a string:")
string2=""
for char in string:
    if char not in string2:
        string2+=char
        if(string.count(char)%2!=0 or string.count(char)==1 ):
            print(char,"count=",string.count(char))
   