import math

def verificar_suma_tres_cubos(n):
    cubos = set()

    # Almacenar los cubos de los números hasta el límite apropiado
    limite = int(math.pow(n, 1/3)) + 1
    for i in range(limite):
        cubos.add(i * i * i)

    # Verificar si existe una suma de tres cubos igual a n
    for a in cubos:
        for b in cubos:
            c = n - a - b
            if c in cubos:
                return True

    return False

casos = int(input())
for _ in range(casos):
    n = int(input())

    if verificar_suma_tres_cubos(n):
        print(f"{n} se puede expresar como la suma de 3 cubos")
    else:
        print(f"{n} no se puede expresar como la suma de 3 cubos")
