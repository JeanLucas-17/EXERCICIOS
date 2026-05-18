print("=== APROVAR OU REPROVAR EMPRESTIMO ===")

valor_casa = float(input("Digite o valor da casa.....: R$ "))
salario = float(input("Digite o seu salario..........: R$ "))
meses = 12 * int(input("Digite em quantos anos vai pagar: "))

salario_30 = salario * 0.30 # 30% do salario
prestacao = valor_casa / meses

if salario_30 <= prestacao:
    print(f"O emprestimo foi APROVADO! A prestação é de R$ {prestacao:.2f} por mês!")
else:
    print(f"O emprestimo foi REPROVADO! A prestação de R$ {prestacao:.2f} ultrapassa 30% do salario!")
