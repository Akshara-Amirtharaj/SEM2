#Convert two given lists to a dictionary.

lst1=eval(input("Enter the elements of l1"))
lst2=eval(input("Enter the elements of l2"))

d={x:y for (x,y)in zip(lst1,lst2)}
print(d)