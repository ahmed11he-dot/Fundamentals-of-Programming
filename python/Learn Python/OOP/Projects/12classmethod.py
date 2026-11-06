class Student:
    count=0
    total_gpa=0
    def __init__(self,name,gpa):
          self.name=name
          self.gpa=gpa
          Student.count+=1
          Student.total_gpa+=gpa

    @classmethod
    def calculat_count(cls):
            return f"{cls.count} users"
    @classmethod
    def calculate_totalGpa(cls):
         if cls.count ==0:
          return 0
         else:
          return f"{cls.total_gpa/cls.count}"

student1=Student("Ahmed",2.4)
student2=Student("Alex",3.0) 
student3=Student("Jack",1.8)  

print(Student.calculat_count())
print(Student.calculate_totalGpa())