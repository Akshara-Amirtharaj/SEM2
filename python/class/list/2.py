# Sunny and Johnny together have M dollars they want to spend on ice cream.
# The parlor offers N flavors, and they want to choose two flavors so that they
# end up spending the whole amount. You are given the cost of these flavors. You
# have to display the indices of the two flavors whose sum is M.

M=int(input("Enter the total sum:"))
n=eval(input("Enter the flavours:"))
length=len(n)
for i in range(0,length-1):
    for j in range(0,i):
        if n[i]+n[j]==M:
            print(i,j)