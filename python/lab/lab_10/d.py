lst=[('yellow', 1), ('blue', 2), ('yellow', 3), ('blue', 4), ('red', 1)]
dict1={}
for colour,number in lst:
    if colour in dict1.keys():
        dict1[colour]+=number
    else:
        dict1[colour]=number
print(dict1)