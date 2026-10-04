
list1=[1,2,3,4]
list2=["A","B","C","D"]
tuple1=("ahmed","yousef","zeyad","Mo")
dic1={
    "Country1":"Egypt","Country2":"Ksa","Country3":"Usa"
}

for item1,item2,item3,item4 in zip(list1,list2,tuple1,dic1):
    print("item2 =>",item1)          #  => print(f"item1 => {item1}") 
    print(f"item2 => {item2}")
    print(f"tuple1 => {item3}")
    print("dic1 key => ",item4,"value =>",dic1[item4]) 
