#Get the key of the minimum value in the dictionary

dict1={"user":1,"user2":2,"user3":3}
lst=[x for x in dict1.values()]
lst.sort()

value=lst[0]
for key,data in dict1.items():
    if data==value:
        print("The key if the minimum value is:",key)
        

