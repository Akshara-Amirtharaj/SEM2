#Remove duplicate values (and the corresponding key) from a given dictionary.
dict1={"user":1,"user3":2,"user2":2}
    
seen, x = [], []
for key in dict1:
    if dict1[key] in seen:
        x.append(key)
    else:
        seen.append(dict1[key])
for i in x:
    dict1.pop(i)
print(dict1)