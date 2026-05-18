print("=== NUMERO PRIMO ===")

num = int(input("Digite um numero: "))

if num <= 1:
    print(f"O numero {num} não é primo!")
else:
    for i in range(2, num):
        if num % i == 0:
            print(f"O numero {num} não é primo!")
            break
    else:
        print(f"O numero {num} é primo!")
