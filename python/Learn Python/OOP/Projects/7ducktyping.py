
class car():
    def speed(self):
        print("200km")

class minicar(car):
    pass 

class van():
    def speed(self):
        print("100km")

Speed=[car(),minicar(),van()]

for spee in Speed:
    spee.speed()