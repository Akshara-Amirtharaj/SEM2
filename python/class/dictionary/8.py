# Obtain a string from the user and create a dictionary with the characters of
# the string as keys and their corresponding counts as values.

string=input("Enter a string")
frequency={}
for i in string:
    if i in frequency.keys():
        frequency[i]+=1
    else:
        frequency[i]=1
print(frequency)