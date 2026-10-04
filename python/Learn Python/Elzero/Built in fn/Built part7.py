
skills=["Python","Html","Css","C++"]

for s in skills:
    print(s )

myskills=enumerate(skills,10)

for sk in myskills:
    print(sk)

print("#"*40)
for c,s in enumerate(skills,10):
    print(f"{c}- {s}")

print("#"*40)

for letter in reversed(skills):
    print(letter)

print("#"*40)

name="Ahmed"
for letter in reversed(name):
    print(letter)



