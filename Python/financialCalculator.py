print("Welcome to your financial calculator\n")
income = float(input("What's your monthly income?: "))
rent = float(input("What's your monthly rent?: "))
utilities = float(input("What's your monthly utilities?: "))
groceries = float(input("What's your monthly groceries?: "))
transport = float(input("What's your monthly transportation costs?: "))
expenses = float(utilities+groceries+transport+rent)
savings = float((income-expenses)/3)
spendings = float(income-expenses-savings)
prent = float()
putilities = float()
pgrocieries = float()
ptransportation = float()
psavings = float()
pexpenses = float()
print(f"Your monthly income is ${round(income,3)}\n")
print(f"Your monthly expenses are ${round(expenses,3)}\n")
print(f"Your monthly savings is ${round(savings,3)}\n")
print(f"Your monthly spendings are ${round(spendings,3)}\n")
print(f"Your rent is {int(prent)}% of your monthly income\n")
print(f"Your utilities are {int(putilities)}% of your monthly income\n")
print(f"Your groceries are {int(pgrocieries)}% of your monthly income\n")
print(f"Your transportation is {int(ptransportation)}% of your monthly income\n")
print(f"Your savings are {int(psavings)}% of your monthly income\n")
print(f"Your savings are {int(pexpenses)}% of your monthly income\n")