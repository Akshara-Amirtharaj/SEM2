def search(tup,low,high,num):
    
    while (low<=high):
        middle=(low+high)//2
        if tup[middle]==num:
            return 1
        elif( tup[middle]<num):
            low=middle+1
        elif (num<tup[middle]):
            high=middle-1
   
    
lst=eval(input("Enter the elements:"))
num=int(input("Enter the number to search:"))
low=0
high=len(lst)
lst.sort()
tup=tuple(lst)
    
if(search(tup,low,high,num)):
    print("Element is found")
else:
    print("Element is not found")
 
    
