#Find the sum of the series 1, (1+2), (1+2+3), (1+2+3+4), …(1+2+…+N), where N is the number of elements in the series, obtained
#from the user.
n=int(input("Enter the number of terms:"))
sum=0
for i in range(1, n + 1):
    for j in range(1, i + 1):
        sum += j
print(sum)