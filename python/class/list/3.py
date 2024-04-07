# +ve -ve zero
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
print(format("Fraction of positive numbers:",cp/length,'.3f'))
print(format("Fraction of negative numbers:",cn/length,'.3f'))
print(format("Fraction of zeros:",cz/length,'.3f'))