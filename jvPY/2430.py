import math

def calcular_numero_baldosas(n, m, a):
    filas = math.ceil(n / a)  # Calcula el número de filas redondeando hacia arriba
    columnas = math.ceil(m / a)  # Calcula el número de columnas redondeando hacia arriba
    
    return filas * columnas  # Retorna el número total de baldosas necesarias

while True:
    try:
        n, m, a = map(int, input().split())
        resultado = calcular_numero_baldosas(n, m, a)
        print(resultado)
    except EOFError:
        break