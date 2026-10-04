
myname="Ahmed" # interable

for letter in myname:
    print(letter,end=" ")

# Mynum=(1,2,3,4) # interable 

# for num in Mynum:
#     print(num,end=" ")

mystring="Ahmed"

toIterator=iter(mystring)

print(f"\n{next(toIterator)}")
print(next(toIterator))
print(next(toIterator))
print(next(toIterator))
print(next(toIterator))
