
choice=input("Enter the country:")
CountriesOne=["Egypt","Ksa","Iraq"]
DiscountOne=60
CountriesTwo=["US","Canada"]
DiscountTwo=40

if choice in CountriesOne:
    print(f"You have ${DiscountOne} discount")
elif choice in CountriesTwo:   
    print(f"You have ${DiscountTwo} discount")
else:
    print("No discount,try again...")