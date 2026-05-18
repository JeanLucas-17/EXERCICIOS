numeros_digitados = 0
soma = 0
num = 0

while True:
    num = int(input("Digite um numero (999 para parar): "))
    if num == 999:
        break
    soma += num
    numeros_digitados += 1

print(f"A soma dos numeros é {soma}, e foram digitados {numeros_digitados} numeros!")
