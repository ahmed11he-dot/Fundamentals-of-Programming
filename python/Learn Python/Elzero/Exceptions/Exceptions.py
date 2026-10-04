
# x=-3

# if x<0:
#     #raise Exception("you must edit the number") => raise ValueError("you must edit the number")
#     raise ValueError("you must edit the number")
#     print(f"The number {x} is less than zero")
# else:
#      print(f"The number {x} is bigger than zero")

# print("the application is done")

                        ############################### 

num=input("Enter the num ")

if not num.isdigit():
      raise Exception("Only Numbers Allowed")
number=int(num)
if(number <= 0):
            raise ValueError("Number Must Be Larger Than 0")
elif(number > 9):
       raise IndexError("Only One Character Allowed")
else:
     print(f"The Number Is {num}")



