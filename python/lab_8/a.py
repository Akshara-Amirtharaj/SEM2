#bubble sort
lst=eval(input("Enter the elements :"))
k=int(input("Enter the value of k:"))
for j in  range(len(lst)):
    for i in range(len(lst)-1) :
     if lst[i]>lst[i+1]:
          lst[i],lst[i+1]=lst[i+1],lst[i]
print("the sorted list is",lst)
print("The",k,"largest element is ",lst[len(lst)-k])