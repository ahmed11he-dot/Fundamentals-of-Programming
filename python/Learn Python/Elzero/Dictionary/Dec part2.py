user={

    "Name":"Ahmed","skill":"Leadership"
}
print(user)

print(user.setdefault("Name","Jo"))
print(user.setdefault("Age",20))
print(user.setdefault("Name","Ahmed"))

print("="*50)
user={

    "Name":"Ahmed","skill":"Leadership"
}
print(user)

user.update({"Age":20})
print(user.popitem())
user["ID"]=1234
print(user)
print(user.popitem())


print("="*50)
user={

    "Name":"Ahmed","skill":"Leadership"
}
print(user)

jj=user.items()
user["skill"]="Communication"
print(jj)

print("="*50)
user={

    "Name":"Ahmed","skill":"Leadership"
}
print(user)

a={"Name","Age","Major"}
b={"c"}
print(dict.fromkeys(a,b))
a={"Name","Age","Major"}
b={"c","b"}
print(dict.fromkeys(a,b))
print(type(dict.fromkeys(a,b)))