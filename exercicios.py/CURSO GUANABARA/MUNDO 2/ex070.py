total_gasto = 0
produtos_mais_de_1000 = 0
preco_produto_mais_barato = 0
nome_produto_mais_barato = ""

while True:
    nome_produto = str(input("Nome do produto: "))
    preco_produto = float(input("Preço do produto: R$ "))

    if total_gasto == 0:
        preco_produto_mais_barato = nome_produto
        preco_produto_mais_barato = preco_produto

    else:
        if preco_produto < preco_produto_mais_barato:
            nome_produto_mais_barato = nome_produto
            preco_produto_mais_barato = preco_produto

    if preco_produto > 1000:
        produtos_mais_de_1000 += 1

    total_gasto += preco_produto

    resposta = str(input("Quer continuar? [S/N]: ")).upper().strip()

    while resposta not in ["S", "N"]:
        print("Apenas [S/N]!")
        resposta = str(input("Quer continuar? [S/N]: ")).upper().strip()

    if resposta == "N":
        break

print(f"O total gasto foi de R$ {total_gasto:.2f}!")

if produtos_mais_de_1000 > 0:
    print(f"{produtos_mais_de_1000} produtos custam mais de R$ 1000!")
else:
    print("Nenhum produto custa mais que R$ 1000!")

print(f"O produto mais barato é o(a) {nome_produto_mais_barato} custando R$ {preco_produto_mais_barato:.2f}!")
