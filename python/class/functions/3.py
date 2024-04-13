#Write a recursive function to find the sum of digits of an integer
num=int(input("Enter a number:"))
def add(num):
    sum=0
    ognum=num
    number=num%10
    sum+=number
    num=num//10
    
    if num==0:
        return sum
    else:
        return sum +add(num)
print("The sum of the digits is",add(num))