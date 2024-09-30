age = int(input("How old are you?: "))
if (age >= 18):
    print("You're old enough to vote.")
elif (age >= 16):
    print("You're old enough to drive.")
elif (age >= 15):
    print("You're old enough to have a learners permit")
elif (age >= 5):
    print("You're old enough to go to school")
else:
    print("You're too young")