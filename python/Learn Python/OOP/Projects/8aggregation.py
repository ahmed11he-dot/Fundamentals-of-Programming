
class Computer:
    pass
class Cpu(Computer):
    def __init__(self,speed):
      self.speed=speed

    def checkspeed(self):
       return(f"the cpu speed {self.speed} HZ")

class Ram(Computer):
    def __init__(self,space):
      self.space=space

    def checkspace(self):
       return(f"the ram space {self.space} GB")

cpu=Cpu(380)
ram=Ram(100)

print(cpu.checkspeed())
print(ram.checkspace())

