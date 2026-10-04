
set1={1,2,4,"Ahmed","Zeyad"}
set2={1,3,4,"Ahmed","Me"}
print(set1)
print(set1.difference(set2)) # set1-set2
print(set1)

print("="*40) 

set1={1,2,4,"Ahmed","Zeyad"}
set2={1,3,4,"Ahmed","Me"}
print(set1)
set1.difference_update(set2) # set1-set2
print(set1)

print("="*40) 

a={1,2,4,"Yousef","Me"}
b={1,3,4,"Ahmed","Me"}
print(a)
print(a.intersection(b)) # => a & b
print(a)

print("="*40) 

a={1,2,4,"Yousef","Me"}
b={1,3,4,"Ahmed","Me"}
print(a)
a.intersection_update(b) # => a & b
print(a)

print("="*40) 

a={1,2,4,"Yousef","Me"}
b={1,3,4,"Ahmed","Me"}
print(a)
print(a.symmetric_difference(b)) # => a ^ b
print(a)

print("="*40) 

a={1,2,4,"Yousef","Me"}
b={1,3,4,"Ahmed","Me"}
print(a)
a.symmetric_difference_update(b) # => a ^ b
print(a)