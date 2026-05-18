maior = menor = 0

for i in range(1, 6):
    print(f"========== {i}ª pessoa ==========")
    peso = float(input("Digite o seu peso em [Kg]: "))

    if i == 1:
        maior = menor = peso

    if peso > maior:
        maior = peso
    if peso < menor:
        menor = peso

print(f"O maior peso é Kg {maior}, o menor peso é Kg {menor}!")
