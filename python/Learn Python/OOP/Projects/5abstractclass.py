
from abc import ABC,abstractmethod
class zoo(ABC):
    @abstractmethod
    def lacation(self):
        pass

    @abstractmethod
    def animals(self):
     pass

class girafe(zoo):
    
       def lacation(self):
           print("The zoo in Hawai")
   
       def animals(self):
        print("The zoo has a lot of animals") 

class gorella(zoo):
    def lacation(self):
        print("The zoo in Hawai")
       
    def animals(self):
        print("The zoo has a lot of animals")


Girafe=girafe()
Gorella=gorella()

Girafe.lacation()
Gorella.animals()
