import datetime

now = datetime.datetime.now().hour

print(now)

if (now <=11):
    print("Good Morning")
elif (now <=16):
    print("Good afternoon")
elif (now <=20):
    print("Good Evening")
else:
    print("GOOD NIGHT. GO TO BED.")

