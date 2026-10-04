
# general={
#  "Html":"60%",
#  "Css":"55%",
#  "Js":"39%"
# }

# print(general.items())

# for dada in general:
#     print(f"{dada} => {general[dada]}")

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

for mainKey,mainValue in peoples.items():
   print(f"{mainKey} progress:")
   for branchKey,branchValue in mainValue.items():
    print(f"{branchKey} => {branchValue}")