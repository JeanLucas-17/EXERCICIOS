from time import sleep

numeros = (
    "zero",
    "um",
    "dois",
    "três",
    "quatro",
    "cinco",
    "seis",
    "sete",
    "oito",
    "nove",
    "dez",
    "onze",
    "doze",
    "treze",
    "quatorze",
    "quinze",
    "dezesseeis",
    "dezessete",
    "dezoito",
    "dezenove",
    "vinte",
)


while True:
    num = int(input("Digite um numero de 0 a 20: "))

    if num >= 0 and num <= 20:
        print(f"Você digitou o numero: {numeros[num]}")

        escolha = str(input("Quer continuar? [S/N]: ")).upper()
        
        while escolha[0] not in ["N", "S"]:
            escolha = str(input("Apenas [S/N]: ")).upper()

        if escolha == "N":
            print("Finalizando...")
            sleep(2)
            break
