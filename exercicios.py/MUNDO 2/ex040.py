nota1 = float(input("Digite sua nota: "))
nota2 = float(input("Digite sua nota: "))

media = (nota1 + nota2) / 2

if media < 5.0:
    print(f"Você foi reprovado com uma media de {media}!")
elif media < 6.9:
    print(f"Você ficou de recuperação com uma media de {media}!")
else:
    print(f"Você foi aprovado com uma media de {media}!")
