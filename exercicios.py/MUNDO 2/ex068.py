from random import randint

vitorias = 0

print("=== PARA OU IMPAR DE 1 A 10! ===")
while True:
    computador = randint(1, 10)

    jogador = int(input("Numero: "))

    while jogador > 10 or jogador < 1:
        print("Apenas de 1 a 10!")
        jogador = int(input("Numero: "))

    escolha_jogador = str(input("Par ou Impar? [P/I]: ")).upper().strip()

    while escolha_jogador not in ["P", "I"]:
        print("Para PAR (P), para IMPAR (I)!")
        escolha_jogador = str(input("[P/I]: ")).upper().strip()

    soma = jogador + computador

    if soma % 2 == 0:
        par_impar = "PAR"

    else:
        par_impar = "IMPAR"

    print(
        f"Você escolheu o {jogador}, e o computador escolheu o {computador}! A soma é {soma}, que dá {par_impar}!"
    )

    if escolha_jogador == "P":
        if par_impar == "PAR":
            print(f"Você venceu!")
            vitorias += 1
        else:
            print("Você perdeu!")
            break
    else:
        if par_impar == "IMPAR":
            print("Você venceu!")
        else:
            print("Você perdeu essa!")
            break

if vitorias > 0:
    print(f"Você venceu {vitorias} veze(s)!")
else:
    print("Você não venceu nenhuma!")
