#Write a Python script to generate and print a dictionary that contains a number (between 1 and n) in the form 𝑥,x^2/4

n=int(input("Enter the value of n:"))
d={x:x**2/4 for x in range(n)}
print(d)