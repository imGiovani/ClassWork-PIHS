#include <stdio.h>
#include "levenshtein.h"  // Incluir o cabeçalho da biblioteca Levenshtein

static bool py_levenshtein(int argc, py_Ref argv){
    PY_CHECK_ARGC(2);
    PY_CHECK_ARG_TYPE(0, tp_str);
    PY_CHECK_ARG_TYPE(1, tp_str);
    const char* str0 = py_tostr(py_arg(0));
    const char* str1 = py_tostr(py_arg(1));
    
    int res = levenshtein(str0, str1);
    py_newint(py_retval(), res);

    return true;
}

int main() {
    const char *str1 = "kitten";
    const char *str2 = "sitting";
    int distancia = levenshtein(str1, str2);  

    printf("Distância de Levenshtein entre '%s' e '%s': %d\n", str1, str2, distancia);

    return 0;
}