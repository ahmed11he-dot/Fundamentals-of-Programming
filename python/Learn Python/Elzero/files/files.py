

file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt")
                    #    read   #
# print(file)
# print(file.name)
# print(file.mode)
# print(file.encoding)


# print(file.read())
# print("="*40)
# file.seek(0) # return the file to read from the first line
# print(file.read(5))
# print("="*40)
# file.seek(0)
# print(file.readline(4))

# print(file.readline(4))
# print(file.readline(2))
# print(file.readline(7))


# print(file.readlines())  # put the data from the file to list
# print(type(file.readlines()))

# for line in file:
#     print(line)
#     if line.startswith("06"):
#         break


# file.close()
                        #  write   #

# file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","w")

# file.write("first\n")
# file.write("second\n")

# mylist=["Ahmed\n","Elsayed\n","Hegazy\n"]

# file.writelines(mylist)

                           #***** append***** #

# file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","a")
# file.write("I am here\n")
# file.write("A h m e d\n\n\n")
# file.write("7egazy")


# file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","a")

# file.truncate(5)

# file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","a")
# print(file.tell())

# file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","r")
# file.seek(0)
# print(file.read())

# file.seek(3)
# print(file.read())

# file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","r")
# import os 

# os.remove(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt")

# file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","a")

# file.write("elzero ")


file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","a")

file.truncate(6)
file=open(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt","a")

print(file.tell())

# import os

# os.remove(r"C:\Users\MF\Documents\Python\Learn Python\General projects\ahmed.txt")






