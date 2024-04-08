#Sort a given dictionary by its keys.
dict1={"user":1,"user3":2,"user2":3}
lst=list(dict1.keys())
lst.sort()

for key in lst:
    x=dict1.pop(key)
    dict1[key]=x
print(dict1)