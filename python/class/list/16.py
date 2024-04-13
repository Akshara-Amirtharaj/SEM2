#Find the sum of each row of matrix of size m x n.
lst=[[1,2,3],[4,5,6],[6,7,8]]
lst2=[]

for i in range(len(lst)):
    result=0
    for j in range(len(lst[i])):
      result+=lst[i][j]
    lst2.append(result)
print(lst2)