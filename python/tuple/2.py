l = [('akshara', 100), ('user', 45), ('user3', 67)]

for i in range(len(l)):
    for j in range(len(l) - i - 1):
        
        if l[j][1] < l[j + 1][1]:
            l[j], l[j + 1] = l[j + 1], l[j]

k = int(input("k: "))
print(l[k-1])