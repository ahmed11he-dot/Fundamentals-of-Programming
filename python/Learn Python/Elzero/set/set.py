# myset={21,"Ahmed",(1,2,3),True}
# print(myset)
# myset={21,"Ahmed",(1,2,3),21}
# print(myset)
# tyi=(1,2,3,4)
# print(tyi[0:3])

myset={"Ahmed","jo","Zeyad"}
ms={"A","B","C"}
myset.clear()
print(myset)
myset={"Ahmed","jo","Zeyad"}
ms={"A","B","C"}
m={"2005"}
print(myset | ms)
print(myset.union(ms,m))
ms.add("c")
ms.add(1)
print(ms)
myset={"Ahmed","jo","Zeyad"}
ms={"A","B","C"}
myset.remove("Ahmed")
ms.discard("c")
print(myset)
print(ms)
ms.pop()
print(ms)

a={1,3,"Ab","DF"}
b=a.copy()
print(a)
print(b)
a.add(6)
print(a)
print(b)

a={1,3,"Ab","DF"}
b={"X","Y","Z"}
a.update(b)
a.update([1,"HTML","CSS"])
print(a)