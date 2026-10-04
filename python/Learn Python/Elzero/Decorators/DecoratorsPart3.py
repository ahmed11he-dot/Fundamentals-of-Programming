
# def myDecorator(fun):

#       def nestedFn(*numbers):

#        for num in numbers:
#          if num < 0 :
#              print("one of the numbers less than zero")
        
#        fun(*numbers)

#       return nestedFn

# @myDecorator
# def calculator(num1,num2,num3,num4,num5,num6):
#      print( num1 + num2+num3+num4+num5+num6)


# calculator(-2,10,5,3,5,7)

from time import time

def speedtest(fun):
    def test():
        start=time()   
        fun()
        end=time()
        print(f"test time: {end - start}")
    return test

@speedtest
def rang():
    for num in range(1,2000):
        print(num)

rang()
