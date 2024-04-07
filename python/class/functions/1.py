#to check if a given number is a happy number or perfect number
num=int(input("enter a number:"))
def perfect(num):
    sum=0  
    for i in range(1,int(num/2)+1):
        if(num%i==0):
            sum+=i
    if(sum==num):
        print("It's a perfect number")
    else:
        print("It's not a perfect number")
    
def happy(num):
    ognum=num
    sum=0
    while(num!=0):
        n=num%10
        sum+=n*n
        num=num//10
    if(int(sum//10)!=0):
        happy(sum)
    if(sum==1): 
        return 1
        
    else:
        return 0
if(happy(num)):
    print("It's a happy number")
else:
    print("It's not ")
perfect(num)