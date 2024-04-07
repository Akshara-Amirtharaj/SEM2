lst=eval(input("Enter the elements in the list:"))
num=int(input("Enter the element to search:"))
flag=0
for i in range(len(lst)):
    if lst[i]==num:
        index=i
        flag=1
        break
if(flag==1):
    print("The element is found at",index,"position")
else:
    print("The element is not found")
    
