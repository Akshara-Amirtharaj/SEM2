M=int(input("Enter the total sum:"))
n=eval(input("Enter the flavours:"))
length=len(n)
for i in range(0,length-1):
    for j in range(0,i):
        if n[i]+n[j]==M:
            print(i,j)