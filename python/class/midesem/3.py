lst=eval(input("Enter the contents of the list:"))
start=int(input("Enter the starting index"))
end=int(input("Enter the end index"))
for j in range(start-1):
    print(lst[j],end=" ")
for i in range(start,end+1):
    lst[i],lst[end-i-1]=lst[end-i-1],lst[i]
    print(lst[i],end=" ")
for k in range(end,len(lst)):
    print(lst[k],end=" ")