total_mulheres = total_homens = 0
mulheres_menos_20_anos = 0
idade_total = total_pessoas = 0
idade_homem_velho = 0
nome_homem_velho = ""
resposta = "S"
i = 1

resposta = input("Quer continuar? [S/N]: ").upper().strip()

while resposta == "S":
    print(f"---- {i}ª pessoa ----")
    nome = input("Nome: ").title()
    idade = int(input("Idade: "))
    i += 1
    
    while idade <= 0:
        print(f"Você não tem {idade} anos!")
        idade = int(input("Sua idade correta: "))

    sexo = input("Sexo [M/F]: ").strip().upper()

    while sexo not in ["M", "F"]:
        print("Sexo invalido!")
        sexo = input("Apenas [M/F]: ").upper().strip()

    total_pessoas += 1
    idade_total += idade

    if sexo == "M":
        total_homens += 1
        if idade > idade_homem_velho:
            idade_homem_velho = idade
            nome_homem_velho = nome
    
    else:
        total_mulheres += 1
        if idade < 20:
            mulheres_menos_20_anos += 1

    resposta = input("Quer continuar? [S/N]: ").upper().strip()

    while resposta not in ["S", "N"]:
        print("Apenas [S/N]!")
        resposta = input("Quer continuar? [S/N]: ").upper().strip()

if total_pessoas > 0:
    media = idade_total / total_pessoas
    print(f"A media de idade do grupo é {media} anos!")
else:
    print("Não tem pessoas nessa lista!")

if total_homens >= 1:
    print(f"O homem mais velho é o {nome_homem_velho} com {idade_homem_velho} anos!")
else:
    print("Não tem homens nesse grupo!")

if total_mulheres >= 1:
    print(f"{mulheres_menos_20_anos} mulheres tem menos de 20 anos!")
else:
    print("Não tem mulheres nesse grupo!")
