#. Reverse each word in a given string.
string1 = input("Enter a string: ")
words = string1.split()  
reversed_words = [word[::-1] for word in words] 

reversed_string = ' '.join(reversed_words)  

print(reversed_string)
