#insertion sort

lst=eval(input("Enter the elements in the list"))

for i in range(1,len(lst)):
    key=lst[i]
    j=i-1
    
    while(j>=0 and lst[j]>key):
        lst[j+1]=lst[j]
        j-=1
    lst[j+1]=key
    
print("The sorted list is:",lst)