from random import randint

numeros = randint(1, 10), randint(1, 10), randint(1, 10), randint(1, 10), randint(1, 10)

print("A lista de numeros é: ", end="")

for num in numeros:
    print(num, end=" ")

print(f"\nO maior valor é: {max(numeros)}")
print(f"O menor valor é: {min(numeros)}")
