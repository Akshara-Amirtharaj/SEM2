# implement caesar's cipher

string=input("Enter a string:")
length=len(string)
for index in range(length):
    if(string[index]!=" "):
      ascii=ord(string[index])+2
      if ascii>=122:
          ascii=ascii-97
      elif ascii>=90 and ascii<97:
          ascii=ascii-65
      char=chr(ascii)
      print(char,end="")
    else:
        print(" ",end="")