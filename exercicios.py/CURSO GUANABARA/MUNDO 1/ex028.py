from random import randint

computador = randint(1, 5)

print("=" * 32)
print("JOGUE UM JOGO COM O COMPUTADOR!")
print("=" * 32)

jogador = int(input("Digite um numero de 1 a 5: "))

if 1 <= jogador <= 5:
    if jogador == computador:
        print(f"Parabéns! Você ganhou!")
    else:
        print(f"Você perdeu! O computador escolheu {computador}!")
else:
    print("Apenas numeros de 1 a 5!")
