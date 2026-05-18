numeros = []
maior = 0
menor = 0
pos_maior = 0
pos_menor = 0

for pos in range(5):
    numeros.append(int(input(f"Digite um numero para posição {pos}: ")))
    if pos == 0:
        maior = menor = pos_maior = pos_menor = numeros[pos]
    else:
        if numeros[pos] > maior:
            maior = numeros[pos]

        elif numeros[pos] < menor:
            menor = numeros[pos]

print(f"Você digitou os valore: {numeros}")

print(f"MAIOR VALOR: {maior} NAS POSIÇÕES: ", end="")
for pos in range(5):
    if maior == numeros[pos]:
        print(pos, end="... ")

print(f"\nMENOR VALOR: {menor} NAS POSIÇÕES: ", end="")

for pos in range(5):
    if menor == numeros[pos]:
        print(menor, end="... ")
