num = int(input("Digite um numero de 0 a 9999: "))

unidade = num % 10
dezena = num // 10 % 10
centena = num // 100 % 10
milhar = num // 1000 % 10

if 0 <= num <= 9999:
    print(f"""
Unidade: {unidade}
Dezena: {dezena}
Centena: {centena}
Milhar: {milhar}
""")
else:
    print("Apenas numeros de 0 a 9999!")
