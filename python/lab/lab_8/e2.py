string=input("Enter the string:")
shift=int(input("Enter the number of shifts:"))
length=len(string)
for i in range(length):
    if(string[i]!=" "): 
        ascii=ord(string[i])+shift
        if(ascii>=122):
          ascii=ascii-26 
        elif(ascii>=90 and ascii<97):
          ascii=ascii-26
          char=chr(ascii)
          print(char,end="")
          ascii=0
else:
    print(" ",end="") 
