#Write a menu driven program to perform the following operations on a given sentence. Write a separate function for each of the following:
#• Reverse the sequence of words in the sentence.
#• List the characters in the string, without duplicates.
#• Find the word count and character count (including spaces).
#• Check if the string contains a given substring. If no substring is provided,
#check if the string contains “ing”.
#• Encode the string by replacing each character in position 𝑖 of the stringby the character at position 𝑖 + 1 and 𝑖 + 2 alternately (if you reach the
#end of the string, go back to the beginning).
#• Exit


def reverse(string):
    k=string[::-1]
    print(k)

def removedup(string):
    hehe=set(string)
    string=list(hehe)
    print(*string,sep="")

def charactercount(string):
    string2=""
    for char in string:
        if char not in string2:
            string2+=char
            print(char,"count=",string.count(char))
            
def wordcount(string):
    count=1
    for char in string:
        if(char==" "):
          count+=1
    print(count)
    
def check(string):
    sub=input("Enter the substring:")
    if sub=="" or sub==" ":
       if "ing" in string:
            print("Substring is found")
       else:
           print("Substring is not found")
       
    else:
       if sub in string:
           print("Substring is found")
       else:
           print("Substring is not found")
       
    
def encode(string):

    lst=list(string)
    beg=lst[0]
    i=0
    while(i!=len(lst)-1):

           lst[i]=lst[i+1]
           i+=1
    print(*lst,sep="")
           
while(1):
    print("(1) Reverse")
    print("(2) Remove duplicates")
    print("(3) Character and word count")
    print("(4) Check if a substring is present in the string")
    print("(5) Encode")
    print("(6) Exit")
    choice=int(input("Enter your choice:"))
        
    if choice==1:
        string=input("Enter a string:")
        reverse(string)
    
    elif choice==2:
        string=input("Enter a string:")
        removedup(string)
    
    elif choice==3:
        string=input("Enter a string:")
        charactercount(string)
        wordcount(string)
        
    elif choice==4:
        string=input("Enter a string:")
        check(string)
        
    elif choice==5:
        string=input("Enter a string:")
        encode(string)
        
    elif choice==6:
        break
    
    else:
        print("Invalid choice")

