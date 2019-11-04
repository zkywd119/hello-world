
number = input("Give me an integer: ")
number = int(number)

x= range(2,number+1)
for element in x:
    if number%element==0:
        print(element)
