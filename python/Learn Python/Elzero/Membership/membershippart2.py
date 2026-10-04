
admins=["Ahmed","Enas","Elsayed","Mohamed","Yousef","Zeyad"]
name=input("Enter your name:").strip().capitalize()

if name in admins:
    print(f"Hi {name}.")
    options=input("Do you need to Update or Delete any admins?").strip().capitalize()
    if options in ["Update", "U"]:
      theNewName=input("Enter the new name:") 
      admins[admins.index(name)] = theNewName
      print(f"Done,{theNewName} you bacame admin")
      print(f"The new admins:{admins}")
    elif options in ["Delete", "D"]:
     removeAdmins=input("what\'s the name of admin you will delete?").strip().capitalize()
     if removeAdmins in admins:
      admins.remove(removeAdmins)
      print(f"the new admins after deleting{admins}")
     else:
      print("This admin does not exist,please write correctly")
    else:
        print("Please choose correctly.")

else:
    print("You are not admin,you need to be a new one Y,N?")  
    choice=input("Y,N:").strip().capitalize()
    if choice in ["Yes", "Y"]:
     TheNewAdmin=input("Write your name:").strip().capitalize()
     admins.append(TheNewAdmin)
     print(f"Done,welcome {admins}")
    elif choice in ["No", "N"]:
       print("Ok") 
    else :
       print("InValid")   
