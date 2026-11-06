
class animal:

    def __init__(self,name):
        self.name=name
        self.isalive=True

    def eat(self):
        print(f"{self.name} is eating")

    def sleep(self):
            print(f"{self.name} is a sleep")
    
class Cat(animal):
  print("meyaio")
    

class Dog(animal):
  print("baying")
    
cat1=Cat("cat")
dog1=Dog("dog")
print(dog1.name)
cat1.sleep()
cat1.eat()
