n=int(input("Enter the number of students"))
student_marks={}
rank=[]
avgl=[]
dict1={}
avg=0
for i in range(n):
    mark=[]
    print("Enter the details of student",i+1)
    math=int(input("Maths"))
    english=int(input("English:"))
    physics=int(input("Physics"))
    chemistry=int(input("Chemistry"))
    cs=int(input("Computer"))
    mark.append([math,english,physics,chemistry,cs])
    avg=(math+english+physics+chemistry+cs)/5
    avgl.append(avg)
    student_marks[f"student{i+1}"]={"Marks":mark,"Average":avg,"Rank":''}

avgl.sort(reverse=True)
for i in range(len(avgl)):
    for students,info in student_marks.items():
        if info["Average"]==avgl[i]:
            info["Rank"]=i+1
        
        

print(student_marks)