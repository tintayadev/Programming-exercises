def calcular_tiempo_llegada(a, b, c):
    tiempo_ascensor1 = abs(a - 1)  # Tiempo para que el ascensor 1 llegue al piso 1
    tiempo_ascensor2 = abs(b - c) + abs(c - 1)  # Tiempo para que el ascensor 2 llegue al piso 1
    
    if tiempo_ascensor1 < tiempo_ascensor2:
        return 1  # Llamar al primer ascensor
    elif tiempo_ascensor1 > tiempo_ascensor2:
        return 2  # Llamar al segundo ascensor
    else:
        return 3  # Ambos ascensores llegan al mismo tiempo

casos = int(input())
for _ in range(casos):
    a, b, c = map(int, input().split())
    resultado = calcular_tiempo_llegada(a, b, c)
    print(resultado)
