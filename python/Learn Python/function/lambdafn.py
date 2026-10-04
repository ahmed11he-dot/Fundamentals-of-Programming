
def sayhello(name):
    return f"Hi,{name}"

print(sayhello("Ahmed"))

hello=lambda name :f"Hi,{name}"

print(hello("Ahmed2"))

print(sayhello.__name__)
print(hello.__name__)

print(type(sayhello))
print(type(hello))

hi=lambda name,age:f"hi:{name},your age is {age}"

print(hi("Ahmed",20))