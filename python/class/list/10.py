#Find the list in a list of lists whose sum of elements is the highest

lst=[[1,3,4],[4,6,7],[8,9,1]]
suml,sumf=[],[]
for i in lst:
    sum=0
    for j in i:
        sum+=j
    suml.append(sum)
suml.sort(reverse=True)
for i in lst:
    sum=0
    for j in i:
        sum+=j
    if sum==suml[0]:
        sumf.append(i)
print(sumf)