#Read a string from the user containing a date in the form mm/dd/yyyy and print the date in the form March 23, 2024.

date=input("Enter date (mm//dd//yyyy)")
dict1={"01":"jan","02":"feb","03":"march","04":"april","05":"may","06":"june","07":"july","08":"august","09":"september","10":"october","11":"november","12":"december"}
month=date[:2]
print(dict1[month] ,date[3:5],",",date[6:])