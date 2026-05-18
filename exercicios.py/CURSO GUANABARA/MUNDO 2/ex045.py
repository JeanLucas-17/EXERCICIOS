from random import choice

lista = ["Pedra", "Papel", "Tesoura"]
computador = choice(lista)

print("=== PEDRA, PAPEL E TESOURA ===")
jogador = str(input("Sua escolha: ")).strip().title()

while jogador not in lista:
    print("Apenas [Pedra, Papel e Tesoura]!")
    jogador = str(input("Sua escolha: "))

if jogador == "Pedra" and computador == "Tesoura":
    print("Você ganhou!")
elif jogador == "Papel" and computador == "Pedra":
    print("Você ganhou!")
elif jogador == "Tesoura" and computador == "Papel":
    print("Você ganhou!")
elif computador == jogador:
    print("Empate!")
else:
    print("O computador ganhou!")

print(f"O computador escolheu {computador} e você escolheu {jogador}!")
