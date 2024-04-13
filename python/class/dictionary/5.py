#Check if a given value exists in a given dictionary and print the corresponding key(s).

d={1:'cal1',2:'huh',3:'lol'}
val=input("Enter the value to search:")
flag=0
for i in d.values():
    if val==i:
        flag=1
        break
if(flag==1):
    print("Element is found")
else:
    print("Element is not found")