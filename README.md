# Distance Calculator with C and PocketPy

Este projeto implementa uma ferramenta em C que expõe funções para calcular as distâncias **Levenshtein** e **Hamming** entre strings, acessíveis a partir de um script Python via **PocketPy**.

## 📋 Funcionalidades

- **`py_levenshtein(str1, str2)`**: Calcula a distância de Levenshtein entre duas strings.
- **`py_hamming(str1, str2)`**: Calcula a distância de Hamming entre duas strings do mesmo tamanho.

Essas funções são disponibilizadas para uso em scripts Python via a engine embutida PocketPy.

---

## 🛠️ Pré-requisitos

- GCC ou outro compilador C
- Biblioteca [PocketPy](https://github.com/blueloveTH/pocketpy) incluída no projeto

## 📜 Execução 

O projeto segue um script Python, arquivo que deve ser criado como script.py
Conforme observado durante o desenvolvimento, as strings escritas no arquivo de script devem estar entre aspas simples 'deste jeito', visto que as strings delimitadas por aspas dulas "neste caso" conflitam com algo do PocketPY

▶️ Para executar/compilar o projeto devem ser utilizados os comandos do CMake:

# Make
    -> Faz a compilação do projeto

# Make run
    -> Faz a execução do projeto previamente compilado

# Make clean
    -> "Limpa"/remove os arquivos que foram compilados pelos comandos anteriores


## ⚠️ Observações

  - A distância de Hamming só pode ser calculada entre strings de mesmo tamanho. Se forem diferentes, a função retorna -1.

  - Certifique-se de que script.py esteja no mesmo diretório do executável ao rodar o programa.

  - Caso ocorra erro na execução, a mensagem "Something went wrong during the execution!!!" será exibida.

---

### 📄 Licença
Este projeto é apenas para fins educacionais/demonstrativos e está sob a licença MIT (assim como está o interpretador PocketPy). Modifique e use livremente.
