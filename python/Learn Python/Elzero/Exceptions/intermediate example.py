
the_file=None
the_tries=5
while the_tries>0:
 try:
    print("Please enter the absloute path of the file")
    print(f"You have {the_tries} tries")
    print(r"Example:F:\Text Document.txt")
    file=input("Enter the file ").strip()
    the_file=open(file,"r")
    print(the_file.read())

    break
 except FileNotFoundError:
    print("File not found error ,enter the correct file")
    the_tries-=1
 except:
    print("Error happens")
 finally:
    if the_file is not None:
     the_file.close()
     print("Thank you for your time")

else:
    print("All tries is done")