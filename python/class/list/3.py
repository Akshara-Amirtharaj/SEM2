# Given a list of integer values, find the fraction of count of positive numbers,
# negative numbers and zeroes to the total numbers. Print the value of the
# fractions correct to 3 decimal places.

lst=eval(input("Enter the numbers:"))
cp,cn,cz=0,0,0
length=len(lst)
for i in range(len(lst)-1):
    if lst[i]>0:
        cp+=1
    elif lst[i]<0:
        cn+=1
    elif lst[i]==0:
        cz+=1
print("Fraction of positive numbers:",format(cp/length,'.3f'))
print("Fraction of negative numbers:",format(cn/length,'.3f'))
print("Fraction of zeros:",format(cz/length,'.3f'))