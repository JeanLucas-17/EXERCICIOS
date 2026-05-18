termos = 10
count = 0

a1 = int(input("Digite o 1ª termo da PA: "))
r = int(input("Digite a razão da PA: "))

while termos > 0:
    count = 0
    while count < termos:
        print(a1)
        a1 += r
        count += 1

    termos = int(input("Digite quantos termos você quer: "))
