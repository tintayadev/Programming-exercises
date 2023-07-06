n = int(input())

for _ in range(n):
    cadena = input()

    # Verificación de inclusividad
    inclusiva = True
    for i in range(len(cadena) - 1):
        if abs(ord(cadena[i]) - ord(cadena[i+1])) != 1:
            inclusiva = False
            break

    # Impresión del resultado
    if inclusiva:
        print("Si")
    else:
        print("No")