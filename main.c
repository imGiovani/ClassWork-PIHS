#include <stdio.h>
#include "levenshtein.h"  // Incluir o cabeçalho da biblioteca Levenshtein
#include <stdlib.h>
#include "pocketpy/pocketpy.h"

static bool py_levenshtein(int argc, py_Ref argv){
    PY_CHECK_ARGC(2);
    PY_CHECK_ARG_TYPE(0, tp_str);
    PY_CHECK_ARG_TYPE(1, tp_str);
    const char* str0 = py_tostr(py_arg(0));
    const char* str1 = py_tostr(py_arg(1));
    
    int result = levenshtein(str0, str1);
    py_newint(py_retval(), result);

    return true;
}
static bool py_hamming(int argc, py_Ref argv){
    PY_CHECK_ARGC(2);
    PY_CHECK_ARG_TYPE(0, tp_str);
    PY_CHECK_ARG_TYPE(1, tp_str);
    const char* str0 = py_tostr(py_arg(0));
    const char* str1 = py_tostr(py_arg(1));
    
    int result = hamming(str0, str1);
    py_newint(py_retval(), result);

    return true;
}

char* string_from_archive(const char* filename) {
    FILE* archive = fopen("script.py", "r");
    if(archive == NULL){
        perror("Sorry, something went wrong! The file couldn't be opened.");
        return NULL;
    }
    fseek(archive, 0, SEEK_END);
    long arch_size = ftell(archive);
    fseek(archive, 0, SEEK_SET);
    char* size_buffer = malloc(arch_size++);
    if (!size_buffer) {
        perror("There's something worng with the allocation");
        fclose(archive);
        return NULL;
    }
    fread(size_buffer, 1, arch_size, archive);
    size_buffer[arch_size] = '\0';
    fclose(arch_size);

    return size_buffer;
}

int main() {
    py_initialize();
    py_GlobalRef __main__ = py_getmodule("__main__");
    py_bindfunc(__main__, "py_levenshtein", py_levenshtein);
    py_bindfunc(__main__, "py_hamming", py_hamming);
    char* script = string_from_archive("script.py");

    if(!py_exec(script, "my_script", EXEC_MODE, NULL)){
        printf("Something went wrong duirng the execution!!!");
    }

    py_finalize();

    return 0;
}