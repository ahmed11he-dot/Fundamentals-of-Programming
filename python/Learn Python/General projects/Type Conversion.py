
x=4

print(type(float(x)))
print(float(x))
print(type(str(x)))

print("="*40)

a="Ahmed"
b=['A',"B",88]
c={"A","C",9}
d={"One":1,"Two":2}
print(tuple(a))
print(tuple(b))
print(tuple(c))
print(tuple(d))

print("="*40)

a=(1,4,5)
b="Ahmed"
c={"A","C",9}
d={"One":1,"Two":2}
print(list(a))
print(list(b))
print(list(c))
print(list(d))


print("="*40)

a=(("A",1),("B",2)) # tuple
d=[["Three",3],["Four",4]] # list
print(dict(a))
print(dict(d))
print("="*40)

a=(1,4,5)
b="Ahmed"
c=["A","C",9]
d={"One":1,"Two":2}
print(set(a))
print(set(b))
print(set(c))
print(set(d))

