
from abc import ABC,abstractmethod
class shape(ABC):
    @abstractmethod
    def area(self):
     pass

class circle(shape):
   def __init__(self,radious):
      self.radious=radious
        
   def area(self):
        return(f"Area of circle= {3.14*self.radious**2} cm^2")

class rectangle(shape):
   def __init__(self,length,wedth):
         self.length=length
         self.wedth=wedth
        
   def area(self):
        return(f"Area of rectangle= {self.length*self.wedth} cm^2")

class square(shape):
   def __init__(self,side):
       self.side=side
       
   def area(self):
        return(f"Area of square= {self.side**2} cm^2")

class pizza(circle):
    def __init__(self,radious):
          super().__init__(radious)
        
          


Shapes=[circle(5),rectangle(4,3),square(6),pizza(4)]

for shape in Shapes:
    print(shape.area())