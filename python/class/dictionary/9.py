# Obtain the prices of N items from a user and create a list. Print the top k
# priciest items and their prices.
lst=[("pencil",10),("pen",25),("eraser",90)]
dict1={x:y for (x,y)in lst}
price=[x for x in dict1.values()]
price.sort(reverse=True)
k=int(input("k:"))
for key,data in dict1.items():
    if data==price[k-1]:
        print("The kth priciest item is",key)
