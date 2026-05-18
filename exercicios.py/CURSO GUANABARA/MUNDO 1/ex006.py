from math import sqrt, pow

num = int(input("Digite um numero: "))

raiz = sqrt(num)
pow2 = pow(num, 2)
pow3 = pow(num, 3)

print(f"Raiz de {num}: {raiz:.2f} \n{num} Elevado a 2: {pow2} \n{num} Elevado a 3: {pow3}")
