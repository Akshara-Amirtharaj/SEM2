#Obtain the percentage mark of N students and store them in a list of tuples,
#where each tuple contains the name and the mark. Display the tuple containing the 𝑘-th highest mark

l = [('akshara', 100), ('user', 45), ('user3', 67)]

for i in range(len(l)):
    for j in range(len(l) - i - 1):
        
        if l[j][1] < l[j + 1][1]:
            l[j], l[j + 1] = l[j + 1], l[j]

k = int(input("k: "))
print(l[k-1])