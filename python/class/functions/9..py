import re
def employee(id):
    match="(^[2]{1}[0-9]{,4}$)"
    if(re.search(match,id)):
        print("Valid")
    else:
        print("Invalid")
        
def name(nam):
    pattern="(^[A-Za-z]+([ .]?[a-zA-Z]+)*$)"
    if(re.search(pattern,nam)):
        print("Valid name")
    else:
        print("Invalid name")
        
def pand(pan):
    match="(^[A-Za-z]{5,5}[0-9]{4,4}[A-Za-z]{1,1}$)"
    if(re.search(match,pan)):
        print("Valid")
    else:
        print("Invalid")
        
def accnum(acc):
    match="(^['120'][0-9]{7,7})"
    if(re.search(match,acc)):
        print("Valid")
    else:
        print("Invalid")
        
nam=input("Enter your name:")
id=input("Enter the employee id:")
pan=input("Enter PAN:")
acc=input("Enter your account number:")

name(nam)
employee(id)
pand(pan)
accnum(acc)
