print("=== TABUADA ===")

while True:
    num = int(input("Numero: "))

    if num < 0:
        break

    print("++===++" * 3)
    for i in range(1, 11):
        print(f"{num} x {i} = {num * i}")
    print("++===++" * 3)
