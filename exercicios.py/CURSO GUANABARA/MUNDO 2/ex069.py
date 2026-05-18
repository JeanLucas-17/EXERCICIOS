maiores_18_anos = 0
homens_cadastrados = 0
mulheres_menos_20_anos = 0

while True:
    idade = int(input("Sua idade: "))
    sexo = str(input("Seu sexo [M/F]: ")).upper().strip()

    while sexo not in ["M", "F"]:
        print("Apenas [M/F]!")
        sexo = str(input("Seu sexo [M/F]: ")).upper().strip()

    if idade >= 18:
        maiores_18_anos += 1

    if sexo == "M":
        homens_cadastrados += 1

    else:
        if idade < 20:
            mulheres_menos_20_anos += 1

    resposta = str(input("Quer continuar? [S/N]: ")).upper().strip()

    while resposta not in ["S", "N"]:
        print("Responda com [S/N]!")
        resposta = str(input("[S/N]: ")).upper().strip()

    if resposta == "N":
        print("Acabou!")
        break

if maiores_18_anos > 0:
    print(f"{maiores_18_anos} pessoa(s) tem mais de 18 anos!")
else:
    print("Todos dessa lista tem menos de 18 anos!")

if homens_cadastrados > 0:
    print(f"Foram cadastrados {homens_cadastrados} homens nessa lista!")
else:
    print("Não foram cadastrados homens nessa lista!")

if mulheres_menos_20_anos > 0:
    print(f"{mulheres_menos_20_anos} mulher(es) tem menos de 20 anos!")
else:
    print("Não tem mulheres nessa lista!")
