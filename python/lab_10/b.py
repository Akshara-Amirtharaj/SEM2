morse_code=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
morse_dict={chr(i+97):code for (i,code)in enumerate(morse_code)}

lst=eval(input("Enter the list of words"))
word_dict={}

for i in lst:
    morse=""
    for j in i:
        if j in word_dict.keys():
            morse=word_dict[j]
        else:
            morse+=morse_dict[j]
    word_dict.update({i:morse})
        
print(word_dict)