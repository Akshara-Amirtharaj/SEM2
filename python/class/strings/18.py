#Count the number of substrings with the same first and last characters in a given string.
string=input("Enter a string:")
count =0
for start in range(len(string)):
    for end in range(start,len(string)):
        if string[start]==string[end]:
            count+=1
print(count)