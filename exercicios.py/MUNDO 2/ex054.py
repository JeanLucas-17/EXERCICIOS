from datetime import date

total_maior = total_menor = 0
ano_atual = date.today().year

for i in range(1, 8):
    print(f"========== {i}ª pessoa ==========")
    ano = int(input("Digite o ano que você nasceu: "))
    idade = ano_atual - ano

    if idade >= 18:
        total_maior += 1
    else:
        total_menor += 1
        
print(f"{total_maior} pessoas são maiores de idade! {total_menor} pessoas são menores de idade!")
