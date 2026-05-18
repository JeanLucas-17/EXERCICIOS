nome = input("Digite seu nome: ")
split_nome = nome.split()
print(f"{nome.upper()} \n{nome.lower()} \n{len(nome.replace(' ', ''))} \n{len(split_nome[0])}")
