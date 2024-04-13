string=input("Enter a string:")
count=0
for i in range(len(string)-1):
    if(string[i]!=string[len(string)-1-i]):
        count=1
        break
if count==0:
    print("It's a palindrome")
else:
    print("It's not")