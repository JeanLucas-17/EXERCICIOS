preco = float(input("Digite o preço do produto: "))
desconto = int(input("Qual a % de desconto: "))
print(
    f"O produto que custava {preco}, passou a custar {preco - (desconto / 100 * preco)}"
)
