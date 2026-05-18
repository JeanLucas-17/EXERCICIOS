print(
    "Para viagens de até 200km, será cobrado R$ 0.50 por km!\nPara viagens mais longas será cobrado R$ 0.45 por km!"
)

distancia = int(input("Qual a distancia da viagem?\n"))

if distancia <= 200:
    valor = distancia * 0.5
    print(f"O valor da viagem é de R$ {valor}!")
elif distancia > 200:
    valor = distancia * 0.45
    print(f"O valor da viagem é de R$ {valor}")
