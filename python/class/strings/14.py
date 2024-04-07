#Obtain a string and a rotated version of a string. Find the number of times the rotated version of the string must be rotated to the right and to the left
#to obtain the actual string.
ostring=input("Enter a string:")
rstring=input("Enter the rotated version:")
index=ostring.find(rstring[0])
if(len(ostring)!=len(rstring)):
    print("They aren't the same")
else:
 if index==-1:
    print("The versions are not matching each other")
 else:
    print("Left rotations=",index)
    print("Right rotations=",len(ostring)-index)
