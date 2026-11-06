# class modern:
#     def __init__(self):
#        print("Ahmed")

# obj1=modern()
# obj2=modern()
# obj3=modern()


class modern:
    def __init__(self,fname,sname,lname):
       self.name_one=fname
       self.name_two=sname
       self.name_three=lname


name1=modern("Ahmed","Elsayed","Hegazy")
name2=modern("jo","Elsayed","Hegazy")
name3=modern("zeyad","Elsayed","Hegazy")

print(name1.name_one,name1.name_two,name1.name_three)
print(name2.name_one)
