from random import shuffle

a1 = input("Digite seu nome: ")
a2 = input("Digite seu nome: ")
a3 = input("Digite seu nome: ")
a4 = input("Digite seu nome: ")

lista = [a1, a2, a3, a4]

shuffle(lista)

print(f"A ordem sorteada foi {lista}")
