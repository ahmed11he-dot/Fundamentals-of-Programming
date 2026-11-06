
class Car:
    def __init__(self,model,type):
        self.model=model
        self.type=type

    def instance_cardata(self):
        return(f"{self.model} {self.type}")

    @staticmethod
    def static_cardata(model,type):
            return(f"{model} {type}")
    
# car1=Car(2019,"BMW")
# print(car1.instance_cardata())
print(Car.static_cardata(2006,"toyota"))