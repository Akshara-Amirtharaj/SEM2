#Create a simple calculator using a dictionary in the place of conditional statements.
a = int(input("Enter: "))
b = int(input("Enter: "))

d = {'+':a+b, '-':a-b, '*':a*b}

print(d.get(input("Enter oper: ")))