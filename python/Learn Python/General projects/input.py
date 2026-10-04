
# Fname=input("Enter your first name:")
# Mname=input("Enter your middle name:")
# Lname=input("Enter your Last name:")

# Fname=Fname.strip().capitalize()
# Mname=Mname.strip().capitalize()
# Lname=Lname.strip().capitalize()

# print(f"your name is {Fname:.1s} {Mname} {Lname}")


name=input("What\'s your name:").strip()
TheGmail=input("What\'s your Gmail:").strip()

TheUserName=TheGmail[:TheGmail.index("@")]
TheWebSite=TheGmail[TheGmail.index("@")+1 :]
print(f"Name: {name} \nGmail: {TheGmail}")
print(f"The user name:{TheUserName}\nThe Website:{TheWebSite}")

