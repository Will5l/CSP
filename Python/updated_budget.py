print("Welcome to your financial calculator\n")

def user_input(type):
    return input(f"How much is your {type}: ")


income = float(user_input("income"))
rent = float(user_input("rent"))
utilities = float(user_input("utilities"))
groceries = float(user_input("groceries"))
transport = float(user_input("transportation"))
expenses = float(utilities+groceries+transport+rent)
savings = float((income-expenses)/3)
spendings = float(income-expenses-savings)
def percent(type, amount):
   per = amount/income*100

   return f"Your {type} is {int(per)}% of your income"

print(f"Your monthly income is ${round(income,3)}\n")
print(f"Your monthly expenses are ${round(expenses,3)}\n")
print(f"Your monthly savings is ${round(savings,3)}\n")
print(f"Your monthly spendings are ${round(spendings,3)}\n")
print(percent("rent", rent), "\n")
print(percent("utilities", utilities), "\n")
print(percent("groceries", groceries), "\n")
print(percent("transportation", transport), "\n")
print(percent("savings", savings), "\n")
print(percent("expenses", expenses), "\n")
