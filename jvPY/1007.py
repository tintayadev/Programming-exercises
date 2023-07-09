def obtener_cantidad_prefijo(frase):
    letras = set()
    tam_prefijo = 0
    for palabra in frase:
        letra = palabra[0]
        if letra in letras:
            continue
        letras.add(letra)
        cantidad = sum(1 for p in frase if p[0] == letra)
        if cantidad > tam_prefijo:
            tam_prefijo = cantidad
    return tam_prefijo

t = int(input())

for _ in range(t):
    num = int(input())
    cantidades = []
    mayor = 0
    for _ in range(num):
        frase = input().split()
        cantidad = obtener_cantidad_prefijo(frase)
        cantidades.append(cantidad)
        if cantidad > mayor:
            mayor = cantidad
    print(f"El ganador es {cantidades.index(mayor) + 1}")
