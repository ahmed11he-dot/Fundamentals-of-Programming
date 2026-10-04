
my=[1,3,"Ahmed","d"]

my.clear()
print(my)

F=[1,3,"Ahmed","d"]
V=F.copy()
print(F)
print(V)
F.append(5)
print(F)
print(V)
F=[1,3,"Ahmed","d"]
print(F.index(3))

g=[3,6,"JO","A","V"]
g.insert(0,"d")
print(g)
g.insert(-1,9)
print(g)
j=[1,2,4,6,88,8,6]

print(j.count(6))


my=[1,3,"Ahmed","d"]
my.clear()
print(my)
j=[1,2,4,6,"py","tet"]

print(j.pop(-1))

print(j.pop(0))
j=[1,2,4,6,"python","tet"]
print(j.pop(-2))