
def myDecoratorOne(fun):

      def nestedFn(num1,num2):
       
         print(" from decorator one")
         fun(num1,num2)

      return nestedFn

def myDecoratorTwo(fun):

      def nestedFn(num1,num2):
        print(" from decorator two")
        fun(num1,num2)

      return nestedFn

@myDecoratorOne
@myDecoratorTwo

def calculator(num1,num2):
     print( num1 + num2)


calculator(10,5)
