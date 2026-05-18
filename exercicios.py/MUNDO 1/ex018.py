from math import sin, cos, tan, radians

angulo = int(input("Digite o angulo: "))
radianos = radians(angulo)

print(f"""
O seno de {angulo} é {sin(radianos):.2f}
O cosseno de {angulo} é {cos(radianos):.2f}
A tangente de {angulo} é {tan(radianos):.2f}
""")
