import sys

# Função que recebe a distância de Levenshtein de um módulo C (lembre-se de integrar via pocketpy)
def run_levenshtein(str1, str2):
    # Chame a função que você integra em C aqui (a ideia é que o pocketpy faça a ponte)
    # Exemplo: distance = c_levenshtein(str1, str2)
    # Simulando saída:
    distance = len(str1) + len(str2)  # Algo fake só para testar
    return distance

# Demonstração para 4 pares de strings
strings = [
    ("kitten", "sitting"),
    ("flaw", "lawn"),
    ("gumbo", "gambit"),
    ("abc", "abcd")
]

for str1, str2 in strings:
    distance = run_levenshtein(str1, str2)
    print(f"Distância de Levenshtein entre '{str1}' e '{str2}': {distance}")
