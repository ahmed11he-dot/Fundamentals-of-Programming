
# mytupleone=("Ahmed",1,5,"gg")
# mytupletwo="Ahmed",2,4,"osama"
# print(type(mytupleone))
# print(type(mytupletwo))

# print(mytupleone[0])
# print(mytupleone[2])
# print(mytupletwo[-1])
# mytupletwo="Ahmed",2,4,"osama"

mytupleone=("Ahmed",)
mytupletwo="Ahmed",
print(len(mytupleone))
print(type(mytupleone))
mytupleone=("Ahmed",1,5,5,"osama")
print(mytupleone.count("Ahmed"))
print(mytupleone.index("osama"))

tupleone=("A","B","C")
tupletwo=("D","E","F")
tupple=tupleone+tupletwo
print(tupple)
result=tupleone+(1,4,7)+tupletwo
print(result)
st="JO"
tup=("Ahmed")
lis=[3]
print(st * 5)
print(tup * 5)
print(lis * 5)

tupleone=("A","B","C")
x,y,z=tupleone
print(x)
print(y)
print(z)
tupleone=("A",2,"B","C","D")
x,_,y,_,z=tupleone
print(x)
print(y)
print(z)
mytupleone=("Ahmed",6)
print("My name is {}".format(mytupleone))
print(f"{mytupleone[1]}")