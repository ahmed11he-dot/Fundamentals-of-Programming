
try:
 LETTER = input("Add Letter From A to Z ").capitalize()
 if(len(LETTER)>1 or not(LETTER >="A" and LETTER <="Z")):
   1/0
except :
  if not(LETTER >="A" and LETTER <="Z"):
     print("The Letter Not In A - Z")
  elif(len(LETTER)>1):
    print("You Must Write One Character Only")
  
else:
 print(F"You Typed {LETTER}")