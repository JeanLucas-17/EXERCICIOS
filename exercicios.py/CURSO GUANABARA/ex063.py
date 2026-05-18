print("Sequencia de fibonacci!")

n = int(input("Digite quantos termos: "))

count = 2
n1 = 0
n2 = 1

print(f"{n1} -> {n2}", end="")
while count < n:
    n3 = n1 + n2
    print(f" -> {n3}", end="")
    n1 = n2
    n2 = n3
    count += 1
