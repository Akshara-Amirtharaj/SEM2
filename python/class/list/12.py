#Get a list of strings from a user and rotate each string N times and return the resulting list.
lst=["aksh","akshara","user"]
newlst=[]
n=3
for i in lst:
    rem=i[:n]
    newstring=i[n:]
    newlst.append(newstring+rem)
print(newlst)