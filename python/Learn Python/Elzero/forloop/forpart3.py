
# ppp={
#     "Python":"50%","Html":"30%","Cpp":"70%"
# }
# print(ppp)
# print(ppp["Python"])

peoples={

"Ahmed":{
"Python":"10%","Html":"48%","Cpp":"25%"
},
"Jo":{
"Python":"99%","Html":"30%","Cpp":"70%"
},

"Zezo":{
"Python":"54%","Html":"60%","Cpp":"90%"
}
}

for name in peoples:
  
   for skill in peoples[name]:
      print(f"{skill} {peoples[name][skill]}")


print("*"*30)

mynum=[1,2,3,5,6,7,15,18]
for num in mynum:
   if num==6:
      continue
   print(num)

print("*"*30)

mynum=[1,2,3,5,6,7,15,18]
for num in mynum:
   if num==6:
      break
   print(num) 

print("*"*30)

mynum=[1,2,3,5,6,7,15,18]
for num in mynum:
   print(num) 
   if num==6:
      break
print("*"*30)

mynum=[1,2,3,5,6,7,15,18]
for num in mynum:
   print(num) 
   if num==6:
    pass

for name in peoples:
#   print(f"{peoples[name]}")

  for skill in peoples[name]:
     print(f"{skill} {peoples[name][skill]}")