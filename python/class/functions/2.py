#Write a recursive function to count down from N
n=int(input("Enter the value of n:"))

def count(n):
    if n==0:
        print("0")
    else:
        print(n)
        return count(n-1)
count(n)