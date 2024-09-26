n = int(input("Enter an integer: "))

if n % 2 == 0:
    print(f"{n} is even.")
else:
2)
n = int(input("Enter an integer: "))

if n & 1 == 0:
    print(f"{n} is even.")
else:
    print(f"{n} is odd.")
3)
a = int(input("Enter first number (a): "))
b = int(input("Enter second number (b): "))

# Swap without using a third variable
a = a + b
b = a - b
a = a - b

print(f"After swapping: a = {a}, b = {b}")
4)
n = int(input("Enter a number: "))

if n % 10 == 0:
    print("n is divisible by 10")
if n % 11 == 0:
    print("n is divisible by 11")
if n % 10 != 0 and n % 11 != 0:
    print("n is not divisible by 10 and 11")
