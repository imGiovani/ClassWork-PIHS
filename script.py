print('.:. Strings distance aplying Levenshtein .:.')
strings = ['Marcelo Gomensoro', 
           'Charles Xavier', 
           'FaFox Sergio', 
           'Giovani Daenerys']
for i in range(len(strings)):
    string_one, string_two = strings[i].split(' ')
    distance = py_levenshtein(string_one, string_two)
    print('Aplying Levenshtein Distance between: ' + string_one + ' & ' + string_two + ' it results in: ' + str(distance))

print('.:. Strings distance aplying Hamming .:.')
strings = ['Erick Errik', 'Jonn John', 'Peddro Pascal', 'Giovani Oliveir']
for i in range(len(strings)):
    string_one, string_two = strings[i].split(' ')
    distance = py_hamming(string_one, string_two)
    print('Aplying Hamming Distance between: ' + string_one + ' & ' + string_two + ' it results in: ' + str(distance))
