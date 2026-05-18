total_homens = idade_homem_velho = idade_homens = total_mulheres = idade_mulheres = mulheres_menos_20_anos = total_pessoas = 0
nome_homem_velho = ""

for i in range(1, 5):
    print(f"=== {i}ª pessoa ===")
    nome = input("Nome: ").title().strip()
    idade = int(input("Idade: "))
    sexo = input("Sexo [M/F]: ").strip().upper()
    
    while sexo not in ["M", "F"]:
        print("Sexo invalido!")
        sexo = input("Apenas [M/F]: ").strip().upper()
    
    if idade > 0:
        total_pessoas += 1

    if sexo == "M":
        if idade > 0:
            idade_homens += idade
            total_homens += 1
            if idade > idade_homem_velho:
                nome_homem_velho = nome
                idade_homem_velho = idade
                
    else:
        if idade > 0:
            idade_mulheres += idade
            total_mulheres += 1
            if idade < 20:
                mulheres_menos_20_anos += 1

if total_pessoas > 0:
    media = (idade_mulheres + idade_homens) / total_pessoas
    print(f"A media de idade do grupo é {media:.0f} anos!")
else:
    print("Não tem pessoas nessa lista!")

if total_homens > 0:
    print(f"O nome do homem mais velho é {nome_homem_velho} com {idade_homem_velho} anos!")
else:
    print("Não tem homens nesse grupo!")

if total_mulheres > 0:
    print(f"{mulheres_menos_20_anos} mulheres tem menos de 20 anos!")
else:
    print("Não tem mulheres nessa lista!")
