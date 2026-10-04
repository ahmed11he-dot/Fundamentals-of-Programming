
import datetime

print(datetime.datetime.now())
print(datetime.datetime.now().year)
print(datetime.datetime.now().month)
print(datetime.datetime.now().minute)
print(datetime.datetime.now().second)
print(datetime.datetime.min)
print(datetime.datetime.max)
print("#"*30)

print(datetime.datetime.now().time())

print("#"*30)
print("Birthday")
mybirthday= datetime.datetime.now()-datetime.datetime(2006,12,5)
print(f"Mybirthday: {mybirthday}")
print(f"Mybirthday: {mybirthday.days} days")

print("Summary:")
print(datetime.datetime.now())

print(datetime.datetime.now().year)

print(datetime.datetime.now().time())

print(datetime.datetime.min)
print(datetime.datetime.max)

