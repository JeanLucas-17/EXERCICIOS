from math import factorial

num = int(input("Digite um numero: "))
fatorial = factorial(num)
count = num

print(f"Fatorial de {num} \n {num}! = ", end="")
print(count, end="")
count -= 1

while count > 0:
    print(f" x {count}", end="")
    count -= 1

print(f" = {fatorial}")
