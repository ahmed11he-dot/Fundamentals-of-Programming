from functools import reduce


def Sum(num1, num2) -> int:
    return num1 + num2

numbers=[1,2,5,7,80]
result=reduce(Sum,numbers)

print(result)

print("#"*40)

result=reduce(lambda num1,num2:num1+num2,numbers)
print(result)