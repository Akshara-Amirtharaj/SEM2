#Reverse the given string and check if it is a palindrome
string=input("Enter a string:")
k=string[::-1]
if k==string:
  print("It's a palindrome")
else:
  print("It's not a palindrome")
  