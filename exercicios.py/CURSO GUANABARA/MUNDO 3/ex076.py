produtos = (
    "Mochila",
    120,
    "Lapis",
    2,
    "Caderno",
    10,
    "Borracha",
    3,
    "Estojo",
    20,
    "Apontador",
    5,
    "Lapizera",
    5,
)

print("-" * 40)
print(f"{"TABELA DE PREÇOS":^40}")
print("-" * 40)

for p in range(0, len(produtos)):
    if p % 2 == 0:
        print(f"{produtos[p]:.<30}", end="")
    else:
        print(f"R${produtos[p]:>7.2f}")

print("-" * 40)
