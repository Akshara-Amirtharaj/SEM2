# #Remove duplicates from a list of lists.
# Sample input: [[10, 20], [40], [30, 56, 25], [10, 20], [33], [40]]
# Expected output: [[10, 20], [40], [30, 56, 25], [33]]

lst1=[[10, 20], [40], [30, 56, 25], [10, 20], [33], [40]]
lst2=[]
for i in lst1:
    if i not in lst2:
        lst2.append(i)
print(lst2)