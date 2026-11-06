
class Company:
      class Employee:
        def __init__(self,name,position):
         self.name=name
         self.position=position

        def get_datails(self):
         return(f"{self.name} {self.position}")

      def __init__(self, company_name):
           self.company_name=company_name
           self.employees=[]

      def addemployee(self,name,position):
         new_employee=self.Employee(name,position)
         self.employees.append(new_employee)
          
      def printemployees(self):
         return[employee.get_datails() for employee in self.employees]

company1=Company("koshory")
company1.addemployee("Alex","Ceo")
company1.addemployee("Jack","founder")
company1.addemployee("Mano","junior")

# print(company1.printemployees())
for employee in company1.printemployees():
   print(employee)