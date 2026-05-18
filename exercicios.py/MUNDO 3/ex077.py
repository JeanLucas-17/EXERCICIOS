palavras = (
    "Andar",
    "Parar",
    "Olhar",
    "Pegar",
    "Onde",
    "Caminhar",
    "Correr",
    "Jantar",
    "Comer",
    "Juntar",
    "Pular",
)

for p in palavras:
    print(f"\nA palavra {p.upper()} tem as vogais: ", end="")

    for letras in p:
        if letras in "aeiou":
            print(letras, end=" ")
