from math import factorial

num = int(input("Digite um numero: "))
fatorial = factorial(num)
count = num

print(f"Fatorial de {num} \n {num}! = ", end="")
print(num, end="")

for i in range(num - 1, 0, -1):
    print(f" x {i}", end="")

print(f" = {fatorial}")
