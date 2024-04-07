#without methods
frequency={}
lst1=eval(input("Enter the elements in the list"))
unique=[]
for i in lst1:
    if i in frequency:
        frequency[i]+=1
    else:
        frequency[i]=1
for element,count in frequency.items():
    if count==1:
        unique.append(element)
        
for i ,j in frequency.items():
    print("count of",i,"is",j)
print("Numbers with unique occurence is",unique)
    