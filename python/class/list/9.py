# Get two 2D lists from a user and add them.
# Sample input: [[1, 2], [2,4], [3,5]] and [[3, 1], [1, 1], [2, 3]]
# Expected output: [[4, 3], [3, 5], [5, 8]]

lst1=[[1, 2], [2,4], [3,5]]
lst2=[[3, 1], [1, 1], [2, 3]]
lst3=[]
for i in range(len(lst1)):
    lst3.append([lst1[i][j]+lst2[i][j] for j in range(len(lst1[i]))])
print(lst3)