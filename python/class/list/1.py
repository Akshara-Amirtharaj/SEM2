# Consider a list of N numbers. Determine if there exists an element in the list
# such that the sum of the elements on its left is equal to the sum of the elements
# on its right. If there are no elements to the left/right, then the sum is
# considered to be zero

lst=eval(input("Enter the elements:"))
suml=0
sumr=0
print(lst)
length=len(lst)
print("The index are:")
for i in range(0,length):
    if(i!=0 and i!=length-1):
        for j in range(0,i):
            suml+=lst[j]
        for k in range(i+1,length):
            sumr+=lst[k]
    elif(i==0 or i==length-1):
        sumr=0
        suml=0
    if suml==sumr:
        print(i,end=" ")
        sumr,suml=0,0
    else:
        sumr,suml=0,0     
   