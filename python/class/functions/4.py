#Write a recursive function to find the sum of the elements of a list.
lst=[]
n=int(input("Enter the number of elements in the list:"))
for i in range(n):
    x=int(input("Enter the element:"))
    lst.append(x)

def sum(lst):
    if len(lst)==0:
        return 0
    else:
        return lst.pop()+sum(lst)
print("The sum is:",sum(lst))