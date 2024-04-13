#using methods

lst1=eval(input("Enter the elements in the tuple:"))
tup1=tuple(lst1)
lst2=[]
lst3=[]

for element in tup1:
    if element not in lst2:
        lst2.append(element)
        print("count of",element,"is",tup1.count(element))
      
for i in lst2:
    if lst1.count(i)==1:
        lst3.append(i)
print("list of elements with only one occurence:",lst3)