# Reemplazar todas las ocurrencias
# https://jv.umsa.bo/problem.php?id=1907

t = int(input())

for _ in range(t):
    cadena_original = input()
    buscar, reemplazar = input().split()

    cadena_modificada = cadena_original.replace(buscar, reemplazar)

    print(cadena_modificada)