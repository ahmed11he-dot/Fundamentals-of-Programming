
def Generator():
    yield 1
    yield 2
    yield 3
    yield 4

myGen=Generator()
# print(next(myGen))
# print("Hi")
# print(next(myGen))
# print("Hi")
# print(next(myGen))
# print("HH")
# print(next(myGen))
for num in myGen:
    print(num)