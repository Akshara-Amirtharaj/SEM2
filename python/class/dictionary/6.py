#. Rename a specified key of a dictionary

dict1={"user":1,"user2":2,"user3":3}

name="user"
rename="user1"
dict2={}
for key,value in dict1.items():
    if name==key:
        dict2.update({rename:value})
    else:
        dict2.update({key:value})
print(dict2)