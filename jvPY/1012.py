# Palindrome extendido
# https://jv.umsa.bo/problem.php?id=1012



# def es_palindromo(s):
#     return s == s[::-1]

# def obtener_palindromo(string):
#     if es_palindromo(string):
#         return string

#     for i in range(len(string)):
#         subcadena = string[i:]
#         if es_palindromo(subcadena):
#             return string + string[:i][::-1]
# caso = input()
# while caso != "END":
#     resultado = obtener_palindromo(caso)
#     print(resultado)
#     caso = input()

while True:
    palabra = input()
    longitud = len(palabra)
    if palabra == 'END':
        break
    palabra_invertida = palabra[::-1]
    longitudes_prefijo = [0] * longitud
    k = 0
    for i in range(1, longitud):
        k = longitudes_prefijo[i - 1]
        while k > 0 and palabra_invertida[k] != palabra_invertida[i]:
            k = longitudes_prefijo[k - 1]
        if palabra_invertida[k] == palabra_invertida[i]:
            k += 1
        longitudes_prefijo[i] = k
    k = 0
    i = 0
    while i < longitud:
        while k > 0 and palabra_invertida[k] != palabra[i]:
            k = longitudes_prefijo[k - 1]
        if palabra_invertida[k] == palabra[i]:
            k += 1
        if i != longitud - 1 and k == longitud:
            k = longitudes_prefijo[longitud - 1]
        i += 1
    print(palabra, end='')
    for i in range(longitud - k - 1, -1, -1):
        print(palabra[i], end='')
    print()
