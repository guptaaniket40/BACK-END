Rollno=int(input("Enter a roll no:"))
sname=input("Enter a student name:")
s1=int(input("Enter a marks of subject 1:"))
s2=int(input("Enter a marks of subject 2:"))
s3=int(input("Enter a marks of subject 3:"))

total=s1+s2+s3
per= total/3

print("Rollno:",Rollno)
print("student name:",sname)
print("total:",total)
print("percentage:",per)


if per>=70:
      print("Distiction")
elif per>=60:
      print("First")
elif per>=50:
     print("second")
elif per>=40:
      print("pass")
else:
     print("Fail")
