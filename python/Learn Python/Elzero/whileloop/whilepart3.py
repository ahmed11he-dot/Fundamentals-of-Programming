
password="Ahmed@"
enterpassword=input("write the password:")
tries=4

while password !=enterpassword:

 tries-=1
 print(f"{"last" if tries==0 else tries } chance left")
 
 enterpassword=input("write the password:")

 if tries == 0 :
  print("all tries done")
  break

else:
 print("loop is done") 