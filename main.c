#include <stdio.h>
#include "levenshtein.h"  // Incluir o cabeçalho da biblioteca Levenshtein

int main() {
    const char *str1 = "kitten";
    const char *str2 = "sitting";
    int distancia = levenshtein(str1, str2);  

    printf("Distância de Levenshtein entre '%s' e '%s': %d\n", str1, str2, distancia);

    return 0;
}