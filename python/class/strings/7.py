string=input("Enter the string:")
vowel="aeiou"
vowels=0
consonant=0
spaces=0
if string.isalpha:
 for char in string:
     if char.lower() in vowel :
         vowels+=1
     elif " " in char:
         spaces+=1
     else:
         consonant+=1
else:
    print("Enter a valid string")
print("Vowels=",vowels)
print("Consonant=",consonant)
