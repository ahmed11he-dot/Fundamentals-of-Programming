
class User:
   not_nameallowed=["Jo","Khaled"]
   user_count=0

   def __init__(self,fname,sname,gender):
        
        self.name_one=fname
        self.name_two=sname
        self.Gen=gender

        User.user_count+=1
    
   def fullname(self):
    if self.name_one in User.not_nameallowed:
                   raise ValueError ("name not allowed")
    else:
       return f"{self.name_one} {self.name_two}"
    

   def fulldetails(self):
      if self.Gen=="male":
         return f"Hello Mr {self.fullname()}"
      elif self.Gen=="female":
         return f"Hello Mrs {self.fullname()}"
      else:
         return self.fullname()

User.user_count+=1
print(User.user_count)

user_one=User("Ahmed","Elsayed","male")
user_two=User("Kamel","Mo","male")
user_three=User("Yara","Zeyad","female")


print(User.user_count)

print(user_one.fulldetails())
print(user_two.fulldetails())
print(user_three.fulldetails())