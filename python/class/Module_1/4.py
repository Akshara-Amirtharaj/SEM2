pay=float(input("Enter the pay for each hour:"))
time=int(input("Enter hours:"))
if time<=40:
    salary=pay*time
elif time>40:
    time=time-40
    salary= pay*40+ time*pay*1.5
    
print("SALARY:",salary)       
    