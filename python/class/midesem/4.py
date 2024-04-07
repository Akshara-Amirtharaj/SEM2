'''
lst1=eval(input("Enter the contents in the list 1:"))
lst2=eval(input("Enter the contemts in the list 2"))
lst3=[]
if(len(lst1)>len(lst2)):
 for i in lst1:
    if i in lst2:
        if i not in lst3:
            lst3.append(i)
else:
    for i in lst2:
     if i in lst1:
        if i not in lst3:
            lst3.append(i)
print(lst3)
'''
l='abc'
print(list(l))
print(l)