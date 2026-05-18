total_9 = 0
total_3 = 0
total_par = 0

numeros = (
    int(input("Digite um numero: ")),
    int(input("Digite um numero: ")),
    int(input("Digite um numero: ")),
    int(input("Digite um numerO: ")),
)

for num in numeros:
    if num == 9:
        total_9 += 1

    if num == 3:
        total_3 += 1

    if num % 2 == 0:
        total_par += 1

if total_9 > 0:
    print(f"O numero 9 foi digitado {total_9} vez(es)!")
else:
    print("O numero 9 não foi digitado!")

if total_3 > 0:
    print(f"O numero 3 aparece na {numeros.index(3) + 1}ª posição!")
else:
    print("O numero 3 não apareceu!")

if total_par > 0:
    print("Numeros pares: ", end="")

    for num in numeros:
        if num % 2 == 0:
            print(num, end=" ")
else:
    print("Não foi digitado numero par!")
