
def Decorators(fun):

    def nestedfun():
        print("Before")
        fun()
        print("After")

    return nestedfun

@Decorators
def sayHello():
    print("say hello for everyone")

@Decorators
def sayname():
    print("My name is Ahmed")
# mydecorator=  Decorators(sayHello)  
# mydecorator()

sayHello()
print("#"*40)
sayname()


