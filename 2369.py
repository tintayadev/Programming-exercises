def solution(N, A):
    counters = [0] * N
    max_counter = 0
    last_max_counter = 0
    
    for operation in A:
        if 1 <= operation <= N:
            # Increase counter X by 1
            if counters[operation - 1] < last_max_counter:
                counters[operation - 1] = last_max_counter
            
            counters[operation - 1] += 1
            
            if counters[operation - 1] > max_counter:
                max_counter = counters[operation - 1]
                
        elif operation == N + 1:
            # Set all counters to max_counter
            last_max_counter = max_counter
            
    for i in range(N):
        if counters[i] < last_max_counter:
            counters[i] = last_max_counter
            
    return counters


#print(solution(5, [1,1,4,6,1,5,5]))
import math
def procesar_estudiante(nombre, notas):
    print("El nombre del estudiante es", nombre)

    # Calcula el promedio
    promedio = math.floor(sum(notas) / len(notas))*10
    print(f"Su promedio es {promedio}/100")

    # Obtiene la nota más alta y la más baja
    nota_mas_alta = math.floor(max(notas))*10
    nota_mas_baja = math.floor(min(notas))*10
    print(f"Su nota mas baja es {nota_mas_baja}/100")
    print(f"Su nota mas alta es {nota_mas_alta}/100")

    # Determina si el estudiante está aprobado o reprobado
    if promedio >= 60:
        print("El estudiante esta aprobado")
    else:
        print("El estudiante esta reprobado")

    print()

casos = int(input())
for _ in range(casos):
    nombre = input()
    notas = list(map(int, input().split()))
    procesar_estudiante(nombre, notas)
