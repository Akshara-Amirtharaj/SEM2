#Create a run-length encoded list from a given list. (E.g.: [1, 1, 1, 2, 1, 2, 2, 3]→ [[1,3], 2, 1, [2, 2], 3]


lst=[1,1,1,2,1,2,2,3]
freq={}
for i in lst:
    if i in freq.keys():
        freq[i]+=1
    else:
        freq[i]=1
nlst=[]      
for key,value in freq.items():
    if value==0 or value ==1:
        nlst.append(key)
    else:
        nlst.append([key,value])
print(nlst)