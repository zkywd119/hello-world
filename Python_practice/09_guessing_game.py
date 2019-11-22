import random

a = random.randint(1,9)
print("the random number is" +str(a))
age = input("Enter a single number in between 1 and 9: ")
age = int(age)
while age!=a:
    if age>a:
        age = input("Enter a smaller number: ")
        age = int(age)
    elif age<a:
        age = input("Enter a larger number: ")
        age = int(age)
print("you guessed it!")
