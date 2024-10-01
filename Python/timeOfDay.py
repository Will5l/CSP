Time = int(input("What time is it? (In 24hr): "))
if (Time >= 1 and Time <=11):
    print("Good Morning")
elif (Time >= 12 and Time <=16):
    print("Good afternoon")
elif (Time >= 17 and Time <=24):
    print("Good Evening")
else:
    print("Invalid")

