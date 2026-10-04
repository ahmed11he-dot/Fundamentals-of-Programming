
Age=20
Country="Egypt"
Language="Arabic"

print(Age > 10 and Country == "Egypt" and Language=="Arabic" )
print(Age > 10 and Country == "Egypt" and Language=="English" )
print(Age > 30 or Country == "Egypt" and Language=="English" )
print(Age > 30 or Country == "Japan" or Language=="Arabic" )
print(not Age == 20)
print(not(Age > 30 or Country == "Japan" or Language=="Arabic" ))