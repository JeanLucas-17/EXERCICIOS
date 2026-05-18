numeros = []

while True:
    num = int(input("Digite um numero: "))

    if num not in numeros:
        numeros.append(num)

    resposta = str(input("Quer continuar? [S/N]: ")).upper()

    while resposta not in ["S", "N"]:
        print("Apenas [S/N]!")
        resposta = str(input("Quer continuar? [S/N]: ")).upper()

    if resposta[0] == "N":
        break

numeros.sort()
print(f"Você digitou os numeros {numeros}")
