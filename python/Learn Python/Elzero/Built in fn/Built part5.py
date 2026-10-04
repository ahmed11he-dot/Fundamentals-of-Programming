
def CheckNum(num):
    if num > 9:
        return num

myNumbers=[0,2,3,65,72,12,33,90]
Check=filter(CheckNum,myNumbers)

for num in Check:
     print(num)

print("#"*40)

def CheckName(name):
    return name.startswith("A")

myNames=["Ahmed","Ashraf","Ayman","Zeyad"]
Check=filter(CheckName,myNames)

for name in Check:
     print(name)

print("#"*40)

my=["Zeyad","Zaza","Zalat","Waled"]

for name in filter(lambda name: name.startswith("Z"),my):
 print(name)

