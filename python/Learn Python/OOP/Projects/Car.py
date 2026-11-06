class car:
    def __init__(self,color,model,country):
        self.color=color
        self.model=model
        self.country=country

    def detailsofcar(self):
     print(f"{self.color} {self.model} {self.country}")

    