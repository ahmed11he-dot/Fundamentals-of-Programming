
Age =int(input("Enter the Age:"))

print("You can enter the world or letter".center(50,"#"))

choice=input("Enter yor age in months,weeks,days,hours:").lower().strip()
months=Age*12
weeks=months*4
days=Age*365
hours=days*24

if choice =="months" or choice =="m":
    print(f"You lived for:{months:,} months")
elif choice =="weeks" or choice =="w":
   print(f"You lived for:{weeks:,} weeks")
elif choice =="days" or choice =="d":
   print(f"You lived for:{days:,} days") 
elif choice =="hours" or choice =="h":
   print(f"You lived for:{hours:,} hours")  
else:
   print("enter a correct word.") 
