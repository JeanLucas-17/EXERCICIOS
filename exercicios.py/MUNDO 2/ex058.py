from time import sleep
from random import randint

computador = randint(0, 10)
tentativas = 1

print("JOGUE UM JOGO! O COMPUTADOR VAI PENSAR EM NUMERO DE 0 A 10!")
print("Pensando...")
sleep(2)

jogador = int(input("Em que numero eu pensei: "))

if 0 > jogador or jogador > 10:
    print("Apenas escolhas de 0 a 10!")
else:
    while jogador != computador:
        print("Errado!")

        if jogador > computador:
            print("Menor!")
        elif jogador < computador:
            print("Maior!")

        jogador = int(input("Sua escolha: "))
        tentativas += 1

    print(f"Parabéns! Você acertou com {tentativas} tentativas!")
