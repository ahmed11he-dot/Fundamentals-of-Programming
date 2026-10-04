
a={1,3,4,"Ahmed","Me"}
b={1,3,4,"Me"}
c={1,3,4}
print(a.issuperset(b)) 
print(a.issuperset(c)) 
print(c.issuperset(b))

print("="*40)

a={1,3,4,"Ahmed","Me"}
b={1,3,4,"Me"}
c={1,3,4}
print(a.issubset(b)) 
print(a.issubset(c)) 
print(c.issubset(b))


print("="*40)

a={"Ahmed","Me"}
b={"Ahmed","Me"}
c={1,3,4}
d={10,2,6}
print(a.isdisjoint(b)) 
print(a.isdisjoint(c)) 
print(c.isdisjoint(d))



