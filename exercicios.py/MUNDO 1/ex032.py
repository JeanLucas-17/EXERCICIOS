ano = int(input("Digite o ano para analisa-lo: "))

if (ano % 400 == 0) or (ano % 4 == 0 and ano % 100 != 0):
    print(f"O ano {ano} é BISSEXTO!")
else:
    print(f"O ano {ano} não é BISSEXTO!")
