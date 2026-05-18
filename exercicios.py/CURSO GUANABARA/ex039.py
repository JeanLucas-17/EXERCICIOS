from datetime import date

ano_atual = date.today().year
ano = int(input("Digite seu ano de nascimento: "))
idade = ano_atual - ano
ano_alistamento = ano + 18

if idade == 18:
    print("Você vai se alisatr esse ano!")
elif idade > 18:
    print(f"Você devia ter se alistado em {ano_alistamento} a {ano_atual - ano_alistamento} anos atras!")
else:
    print(f"Você vai se alistar em {ano_alistamento}, faltam {ano_alistamento - ano_atual} anos para você se alistar!")
