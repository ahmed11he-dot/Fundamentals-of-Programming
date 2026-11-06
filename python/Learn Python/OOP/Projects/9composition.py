
class Engine:
    def __init__(self,horse_power):
        self.horse_power=horse_power

class Wheels:
    def __init__(self,wheels_size):
            self.wheels_size=wheels_size

class Car:
    def __init__(self,make,model,horse_power,wheels_size):
           self.make=make
           self.model=model
           self.engine=Engine(horse_power) 
           self.wheel=[Wheels(wheels_size) for wheels in range(4)]

    def display_car(self):
         return(f"{self.make} {self.model} {self.engine.horse_power}hp {self.wheel[0].wheels_size} in")

car1=Car(make="BMW",model=2026,horse_power=200,wheels_size=28)
car2=Car(make="Mercedes",model=2025,horse_power=250,wheels_size=35)
print(car1.display_car())
print(car2.display_car())
