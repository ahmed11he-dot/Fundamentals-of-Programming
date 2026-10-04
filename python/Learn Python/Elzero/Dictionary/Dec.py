
dic={
     "Name":"Ahmed","Major":"Electrical Engineering",
     "Age":19,"Name":"jo"
}
print(dic)
print(dic.keys())
print(dic.values())

print(dic["Age"])

dic={
     "Name":"Ahmed","Major":"Electrical Engineering",
     "Age":19,"Name":"jo"
}
print(dic)

user={
'one':{
    "Name":"Ahmed",'Age':19,"ID":123
},
'Two':{
    "Name":"Jo",'Age':17,"ID":11
},
'Three':{
    "Name":"Zeyad",'Age':15,"ID":55
}
}
print(user.keys())
print(user.values())
print(user["one"]["Name"])
print(user["Two"]["Age"])

One={
    "Name":"Ahmed",'Age':19,"ID":133
}
Two={
    "Name":"Jo",'Age':17,"ID":11
}
Three={
    "Name":"Zeyad",'Age':15,"ID":55
}

New_user={
    "One":One,"Two":Two,"Three":Three
}
print(New_user["One"])
print(New_user["One"]["Age"])

dic={
     "Name":"Ahmed","Major":"Electrical Engineering",
     "Age":19,"Name":"jo"
}
dic.clear()
print(dic)
dic={
     "Name":"Ahmed","Major":"Electrical Engineering",
}
dic["Name"]="JO"
print(dic)
dic.update({"Name":"Zeyad"})
print(dic)
dic["Major"]="Science"
print(dic)

dic.update({"Major":"ff"})
print(dic)

print("="*50)
dic={
     "Name":"Ahmed","Major":"Electrical Engineering",
}
f=dic.copy()
print(f)
dic.update({"Name":"uu"})
print(dic)
print(f)
print(f.keys())


print("="*50)
New={
    "One":"Min","Two":"his","Three":"her"
}
New.update({"One":"Mine"})
print(New)
New["One"]="dd"
print(New)
print(len(New))
print(len(New["One"]))

user={
'One':{
    "Name":"Ahmed",'Age':19,"ID":123
},
'Two':{
    "Name":"Jo",'Age':17,"ID":11
},
'Three':{
    "Name":"Zeyad",'Age':15,"ID":55
},
}
print(len(user))
print(len(user["One"]))