while True:
    print("===   MINI CAIXA ELETRONICO  ===")
    print("=== NOTAS DE : 50, 20, 10, 1 ===")

    saque = int(input("Valor do saque: R$ "))

    nota50 = saque // 50
    resto = saque % 50
    nota20 = resto // 20
    resto = resto % 20
    nota10 = resto // 10
    resto = resto % 10
    nota1 = resto

    if nota50 > 0:
        print(f"Notas de 50: {nota50}")
    if nota20 > 0:
        print(f"Notas de 20: {nota20}")
    if nota10 > 0:
        print(f"Notas de 10: {nota10}")
    if nota1 > 0:
        print(f"Notas de 1: {nota1}")

    resposta = str(input("Quer continuar? [S/N]: ")).upper().strip()

    while resposta not in ["S", "N"]:
        print("Apenas [S/N]!")
        respsota = str(input("[S/N]: ")).upper().strip()
    
    if resposta == "N":
        print("Volte sempre!")
        break
