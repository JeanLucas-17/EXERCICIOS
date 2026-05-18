from math import hypot

cateto_oposto = float(input("Digite o valor do cateto oposto: "))
cateto_adjacente = float(input("Digite o valor do cateto adjacente: "))

print(
    f"Com os catetos {cateto_oposto} e {cateto_adjacente} a hipotenusa mede {hypot(cateto_adjacente, cateto_oposto):.2f}"
)
