#Get a nested list from a user and sort the list based on the last element of each list.
# Sample input: [[1,2], [3, 4, 5], [1, 1], [3, 4, 9]]
# Expected output: [[1,1], [1, 2], [3, 4, 5], [3, 4, 9]]

lst=[[1,2], [3, 4, 5], [1, 1], [3, 4, 9]]
nlst1=[]
nlst2=[]
for i in lst:
    nlst1.append(i[-1])
nlst1.sort()
for i in nlst1:
    for j in lst:
        if i==j[-1]:
            nlst2.append(j)
print(nlst2)