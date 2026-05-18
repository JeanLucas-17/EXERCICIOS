valor_produto = float(input("Digite o valor do produto: R$ "))

print(
    "Menu: \n  [1] A vista dinheiro / cheque \n  [2] A vista no cartão \n  [3] 2x vezes no cartão! \n  [4] 3x ou mais no cartao"
)

escolha = int(input("Sua escolha: "))

while escolha not in [1, 2, 3, 4]:
    print("Apenas escolhas de 1 a 4!")
    escolha = int(input("Sua escolha: "))

if escolha == 1:
    print(
        f"A vista no dinheiro / cheque tem 10% de desconto! \nO preço final fica R$ {valor_produto - (valor_produto * 0.10):.2f}!"
    )
elif escolha == 2:
    print(
        f"A vista no cartao tem 5% de desconto! \nO preço final fica R$ {valor_produto - (valor_produto * 0.05):.2f}"
    )
elif escolha == 3:
    print(
        f"Em 2x vezes no cartao nao tem desconto! \nO preço final fica R$ {(valor_produto / 2):.2f}"
    )
else:
    print(f"Em 3x ou mais tem 20% de juros no preço final! O preço final é de R$ {valor_produto + (valor_produto * 0.20)}!")
    meses = int(input("Em quantos meses você irá pagar? "))
    while meses < 3:
        print("A opção 4 só aceita a partir de 3x!")
        meses = int(input("Em quantos meses você irá pagar? "))

    if meses >= 3:
        prestacao = (valor_produto + valor_produto * 0.20) / meses
        print(f"A prestação é de R$ {prestacao} por mês!")
