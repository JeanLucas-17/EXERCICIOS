# diaria = 60
# km = 0.15

dia = int(input("Quantos dias você alugou o carro?\n"))
km = int(input("Quantos km você andou com o carro?\n"))
total_gasto = (dia * 60) + (km * 0.15)
print(f"O total a pagar é de R$ {total_gasto}")
