
mynumber=range(1,101)

for num in mynumber :
    print(num)


myskills={
"python":"40%","Css":"30%","Cpp":"80%"
}    

for skill in myskills:
    # print(f"{skill}:{myskills[skill]}" >=
    print(f"{skill}:{myskills.get(skill)}")