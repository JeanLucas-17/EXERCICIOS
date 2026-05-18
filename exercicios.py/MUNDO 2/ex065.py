numeros_digitados = 0
soma = 0
menor = maior = 0
resposta = "S"

while resposta == "S":
    num = int(input("Numero: "))

    numeros_digitados += 1
    soma += num

    if numeros_digitados == 1:
        maior = menor = num

    if num > maior:
        maior = num
    if num < menor:
        menor = num

    resposta = str(input("Quer continuar? [S/N]: ")).upper().strip()

    while resposta not in ["S", "N"]:
        print("Apenas [S/N]!")
        resposta = str(input("[S/N]: ")).upper().strip()

media = soma / numeros_digitados

print(f"O maior numero é {maior}, e o menor numero é {menor}! A media é {media:.1f}!")
