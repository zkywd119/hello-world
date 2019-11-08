lists = input("Give me a string: ")
n = len(lists)
k=0
for i in range(0,round(n/2)):
    if lists[i] != lists[n-1-i]:
        k=k+1

if k>0:
    print(lists + " is not a palindrome")
else:
    print(lists + " is a palindrome")
