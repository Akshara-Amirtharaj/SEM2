n=eval(input("Enter the elements as list:"))
dict1={"ODD":0,"EVEN":0}
for num in n:
    if num%2==0:
        dict1["EVEN"]+=1
    else:
        dict1["ODD"]+=1
print(dict1)
