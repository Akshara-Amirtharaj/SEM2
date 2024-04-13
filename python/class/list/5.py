#Remove consecutive duplicates from a given list. (E.g.: [1, 2, 2, 3, 4, 2] → [1, 2, 3, 4, 2])

n=[1,2,2,3,4,2]
final=[]
for i in range(len(n)):
   try:
     if(n[i]!=n[i+1]):
       final.append(n[i])
   except IndexError:
       if(n[len(n)-1]!=n[len(n)-2]):
        final.append(n[len(n)-1])
print(final)