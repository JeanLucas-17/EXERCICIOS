salario = float(input("Digite seu salario:\nR$ "))

if salario > 1250:
    salario_aumento = salario + (salario * 0.1)
    print(f"Seu salario de R$ {salario} foi para R$ {salario_aumento}!")
elif salario <= 1250:
    salario_aumento = salario + (salario * 0.15)
    print(f"Seu salario de R$ {salario} foi para R$ {salario_aumento}!")
