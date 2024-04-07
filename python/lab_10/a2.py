string=input("Enter a string:")
lst=[word for word in string]
frequency={}
string2=""
for i in string:
    if i not in string2:
        string2+=i
        
for i in string2:
    frequency.update({i:string.count(i)})
print(frequency)