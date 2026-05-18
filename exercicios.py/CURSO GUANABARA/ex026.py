frase = input("Digite uma frase: ").lower()

print(f"""
A letra 'a' aparece {frase.count('a')} vezes!
A letra 'a' aparece na posição {frase.find('a') + 1} a primeira vez!
A letra 'a' aparece na posição {frase.rfind('a') + 1} a ultima vez!
""")
