#Find the sum of the series, 𝑥 − 𝑥3 + 𝑥5 − 𝑥7 + ⋯ up to N terms. Obtain 𝑥
#and N from the user.

import math
n=int(input("Enter the number of terms:"))
x=int(input("Enter the value of x:"))
sum=0
for i in range(n):
    power=2*i+1
    sum=sum+ math.pow(-1,i)*math.pow(x,power)
print(sum)