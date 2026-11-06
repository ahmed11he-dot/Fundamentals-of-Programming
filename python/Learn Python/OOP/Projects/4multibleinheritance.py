
class animal():
    def __init__(self,name):
        self.name=name

    def animalname(self):
     print(f"{self.name} is an animal name.")
      

class cute(animal):
   def sleeping(self):
        print(f"{self.name} is sleeping")

class hunting(animal):
   def baying(self):
     print(f"{self.name} is baying")

class dog(hunting):
    pass
class cat(cute):
    pass
class mouth(hunting):
    pass

class whale(cute,hunting):
    pass 

Dog=dog("tony")
Cat=cat("fruit")
Mouth=mouth("kelwa")
Whale=whale("Alex")

Dog.animalname()
Dog.baying()

Cat.sleeping()
Whale.sleeping()
Whale.baying()
