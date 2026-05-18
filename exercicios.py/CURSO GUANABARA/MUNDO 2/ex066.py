numeros_diigitados = soma = 0

print("A condição de parada é o 999!")

while True:
    num = int(input("Numero: "))

    if num == 999:
        break

    soma += num
    numeros_diigitados += 1

print(f"Foram digitados {numeros_diigitados} numeros, e a soma entre eles é {soma}!")
