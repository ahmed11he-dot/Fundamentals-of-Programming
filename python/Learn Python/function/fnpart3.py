
# data={
#  "Python":"70%",
#  "CPP":"80%",
#  "CSS":"30%"
# }

# def show(**data):
   
#     for keySkill,valueSkill in data.items():
#         print(f"{keySkill} => {valueSkill}")

# show(Python="70%",CPP="80%",CSS="30%")

# print("*"*40)
# def show(**data):
    
#     for keySkill,valueSkill in data.items():
#         print(f"{keySkill} => {valueSkill}")

# show(**data)


# tup=("Css","Html","Js")

# def skills(name,*tup,**data):
#      print(f"{name} =>")
#      for skill in tup:
#         print(f"-{skill}")
#      for keySkill,valueSkill in data.items():
#         print(f"{keySkill} => {valueSkill}")
# skills("Ahmed",*tup,**data)


# def skills(name,*tup,**data):
#      print(f"{name} =>")
#      for skill in tup:
#         print(f"-{skill}")
#      for keySkill,valueSkill in data.items():
#         print(f"{keySkill} => {valueSkill}")
# skills("Ahmed",*tup,**data)

global x
x=1

def one():
    
    print(f"your number:{x}")
def two():
    x=3
    print(f"your number:{x}")



one()
print(f"your number:{x}")
two()
