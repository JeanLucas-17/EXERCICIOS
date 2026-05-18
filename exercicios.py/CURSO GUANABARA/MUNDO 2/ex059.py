from time import sleep

n1 = int(input("Digite um numero: "))
n2 = int(input("Digite outro numero: "))

while True:
    print(
        "Menu: \n [ 1 ] Soma \n [ 2 ] Multiplicar \n [ 3 ] Maior \n [ 4 ] Novos numeros \n [ 5 ] Sair do programa"
    )

    escolha = int(input("Sua escolha: "))

    while escolha > 5 or escolha < 1:
        print("A escolha deve ser de 1 a 5!")
        escolha = int(input("Sua escolha: "))

    if escolha == 1:
        soma = n1 + n2
        print(f"A soma de {n1} + {n2} = {n1+n2}")
    elif escolha == 2:
        multiplicar = n1 * n2
        print(f"A multiplicação de {n1} x {n2} = {n1*n2}")
    elif escolha == 3:
        maior = max(n1, n2)
        print(f"O maior numero entre {n1} e {n2} é {maior}")
    elif escolha == 4:
        n1 = int(input("Digite um numero: "))
        n2 = int(input("Digite outro numero: "))
    else:
        print("Finalizando...")
        sleep(2)
        break

    sleep(2)
