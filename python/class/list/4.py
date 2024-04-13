# Find items starting with a specific character (obtained from the user) from a given list

n=['appele','orange','yellow','green','blue','white','grey']
char='g'
final=[]
for i in n:
    if i.startswith('g'):
        final.append(i)
print(final)