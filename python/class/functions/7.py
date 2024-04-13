#Write a function that adds ‘ing’ to the end of a given string, provided that the string has more than 3 characters. If the string already ends with ‘ing’,
# add ‘ly’ instead. If there are less than 3 characters, leave the string as it is.
string=input("Enter a string")

def check(string):
    if "ing" in string:
       string+="ly"
       print(string)
    elif len(string)>3:
       string+="ing"
       print(string)
    elif len(string)<3:
       print(string) 

check(string)
