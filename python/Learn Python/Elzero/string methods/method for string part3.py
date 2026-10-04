
# a="My name is Ahmed"
# print(a.index("n"))
# print(a.index("A",10,15))
# print(a.index("A",2,5)) # Error

# a="My name is Ahmed"
# print(a.find("n"))
# print(a.find("A",10,15))
# print(a.find("A",2,5)) # -1

# g="""My
# major
# is
# Electerical
# Engineering"""
# print(g.splitlines())

# f="Ahmed\nElsayed\nHegazy"
# print(f.splitlines())

# d="Zeyad"
# print(d.rjust(10))
# print(d.rjust(10,"$"))
# print(d.ljust(9))
# print(d.ljust(9,"#"))


# z="Engineer Student"
# print(z.istitle())
# z="Engineer student"
# print(z.istitle())
# z="Engineer 3d"
# print(z.isalpha())
# z="Engineer3d"
# print(z.isalnum())

# d="enter"
# print(d.isidentifier())
# d="1enter"
# print(d.isidentifier())
# d="enter-code"
# print(d.isidentifier())
# d="enter_code"
# print(d.isidentifier())
# d="That is my first time here"
# print(d.replace("is","is not"))
# d="i would help her , but i am busy"
# print(d.replace("i"," he",1))
# print(d.replace("i"," he",2))

mylist=["That","is","my","first","time","here"]
print("-".join(mylist))
print("0".join(mylist))
print(",".join(mylist))

b="Ahmed Elsayed Hegazy"
print(type(b))