for i in range(4):
    numero = int(input("Digite um numero: "))
    if i == 0:
        maior = numero
        menor = numero
    if numero > maior:
        maior = numero
    if menor > numero:
        menor = numero

print(f"O menor numero é o {menor}!\nO maior numero é o {maior}!")
