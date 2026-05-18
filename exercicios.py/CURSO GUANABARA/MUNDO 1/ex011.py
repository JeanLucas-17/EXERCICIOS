altura = float(input("Digite a altura da parede em M: "))
largura = float(input("Digite a largura da parede em M: "))
tinta = float(input("Cada litro de tinta pinta quantos metros de parede: "))
print(
    f"Sua parede tem uma area de {altura*largura}m^2, e será necessario {altura*largura/tinta} litros de tinta!"
)
