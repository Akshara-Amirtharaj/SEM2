#Obtain N lists from a user and return the list of indices at which all N lists contain the same element.
n=int(input("Enter the number of lists:"))
lst=[]
index=[]
for i in range(n):
    lst.append(eval(input("enter:")))
print(lst)
for i in range(len(lst)):
    try:
      if all(lst[0][i]==lst[j][i] for j in range(len(lst[i]))):
        index.append(i)
    except IndexError:
        pass
print(index)