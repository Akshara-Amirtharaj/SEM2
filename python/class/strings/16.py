#Get a sentence from the user and replace the first letter of each word by the next letter in the alphabet sequence
# (E.g.: this is a zebra. → uhis js b
string=input("Enter the string:")
test=string.split()
for word in test:
    if(ord(word[0])==90):
        ascii=65
    elif(ord(word[0])==122):
        ascii=97
    else:
        ascii=ord(word[0])+1
    char=chr(ascii)
    print(char,end="")
    for rem in word[1:]:
        print(rem,end="")
    
    print(end=" ")        
    