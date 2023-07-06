n = int(input())
palabras = input().split(" ")
palabras_originales = set()

for palabra in palabras:
    es_original = True
    for i in range(len(palabra)):
        rotacion = palabra[i:] + palabra[:i]
        if rotacion in palabras_originales:
            es_original = False
            break
    if es_original:
        palabras_originales.add(palabra)
print(len(palabras_originales))