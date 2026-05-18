sexo = str(input("Qual o seu sexo? [M/F]: ")).strip().upper()[0]

while sexo not in ["M", "F"]:
    sexo = str(input("Sexo invalido! Apenas [M/F]: ")).upper().strip()[0]

print(f"Sexo {sexo} registrado com sucesso!")
