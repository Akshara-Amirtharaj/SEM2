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
   