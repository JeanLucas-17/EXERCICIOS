print("O limite da via é de 80 km/h")

velocidade = int(input("Digite a volocidade do carro:\n"))
if velocidade > 80:
    multa = 7 * (velocidade - 80)
print(f"""Você foi multado! O limite da via é de 80 km/h!
A multa a ser paga é de R$ {multa}!""")

print("Tenha um bom-dia! Dirija com segurança!")
