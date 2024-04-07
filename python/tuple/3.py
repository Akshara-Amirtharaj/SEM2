string = 'akshrarasr'

l = [(i, string.count(i)) for i in set(string)]

# for letter in set(string):
#     l.append((letter, string.count(letter)))


for i in range(len(l)):
    for j in range(len(l) - i - 1):
        
        if l[j][1] < l[j + 1][1]:
            l[j], l[j + 1] = l[j + 1], l[j]
            
max = l[0][1]

for i in l:
    if i[1] == max:
        print(i, end=' ')
    else:
        break