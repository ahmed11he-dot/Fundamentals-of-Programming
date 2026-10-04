
myfavoritewebs=[]
maxwebs=4

while maxwebs > 0 :
    web=input("enter the web adress without\'https://\':").strip().lower()
    myfavoritewebs.append(web)
    maxwebs-=1
    print(f"website added,{maxwebs} still places")
    print(myfavoritewebs)
else:
    print("the favourite webs list is full")

index=0
while index <len(myfavoritewebs):
    myfavoritewebs.sort()
    print(myfavoritewebs[index])
    index+=1
    

