#without using count
frequency={}
string=input("Enter a string")
lst1=[word for word in string]
for i in lst1:
    if i in frequency:
        frequency[i]+=1
    else:
        frequency[i]=1
        
        
print(frequency)

