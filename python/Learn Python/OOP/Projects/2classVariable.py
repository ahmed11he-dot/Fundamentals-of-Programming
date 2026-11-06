
class Student:
    yearOfGraduation=2029
    count=0

    def __init__(self,name,age):
        self.name=name
        self.age=age
        Student.count+=1

print(Student.count) # => 0

student1=Student("Ahmed","20")
student2=Student("Mo","25")

print(f"{student1.name } u have {Student.yearOfGraduation-2026} years to graduate ")
print(f"{student2.name } u have {Student.yearOfGraduation-2027} years to graduate ")
print(f"num of students are {Student.count}") # => 2
        