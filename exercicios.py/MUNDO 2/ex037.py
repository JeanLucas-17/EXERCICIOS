resposta = "S"

while resposta == "S":
    num = int(input("Digite um numero: "))
    print("Base de conversão: \n  [1] Binário \n  [2] Octal \n  [3] Hexadecimal")
    escolha = int(input("Sua escolha: "))

    while escolha not in [1, 2, 3]:
        print("Apenas escolhas de 1 a 3!")
        print("Base de conversão: \n  [1] Binário \n  [2] Octal \n  [3] Hexadecimal")

        escolha = int(input("Sua escolha: "))

    if escolha == 1:
        print(f"O numero {num} em binário é {bin(num)[2:]}!")
    elif escolha == 2:
        print(f"O numero {num} em octal é {oct(num)[2:]}!")
    elif escolha == 3:
        print(f"O numero {num} em hexadecimal é {hex(num)[2:]}!")

    resposta = str(input("Quer continuar? Apenas [S/N]: ")).upper().strip()

    while resposta not in "S" and "N":
        resposta = str(input("Apenas [S/N]: "))
