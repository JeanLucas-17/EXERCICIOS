times = (
    "Flamengo",
    "Palmeiras",
    "Corinthians",
    "Sao Paulo",
    "Santos",
    "Gremio",
    "Internacional",
    "Atletico Mineiro",
    "Chapecoense",
    "Fluminense",
    "Botafogo",
    "Vasco da Gama",
    "Athletico Paranaense",
    "Coritiba",
    "Bahia",
    "Fortaleza",
    "Ceara",
    "Goias",
    "Sport Recife",
    "Red Bull Bragantino",
)

print("=== OS 5 PRIMEIROS COLOCADOS ===\n")

for time in range(5):
    print(f"{time + 1}ª {times[time]}")

print("\n=== OS 4 ULTIMOS DA TABELA ===\n")

for time in range(16, 20):
    print(f"{time + 1}ª {times[time]}")

print("\n=== ORDEM ALFABETICA ===\n")

print(f"Ordem: {sorted(times)}")

print("\n=== POSIÇÃO DO Gremio ===\n")

print(f"O Gremio esta na {times.index("Gremio") + 1}ª posição!")
