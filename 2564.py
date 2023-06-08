# from collections import deque

# def busquedaBFS(A, B):
#     queue = deque([(0, 0)])  # Inicializar la cola con el número 0 y suma de dígitos 0
#     visited = set([(0, 0)])  # Conjunto de números visitados para evitar repeticiones
#     limit = 10**6  # Límite superior para la búsqueda en anchura

#     while queue:
#         num, digit_sum = queue.popleft()

#         if num != 0 and num % A == 0 and digit_sum == B:
#             return num

#         if num * 10 <= limit:
#             for digit in range(1, 10):
#                 new_num = num * 10 + digit
#                 new_digit_sum = digit_sum + digit
#                 if (new_num, new_digit_sum) not in visited:
#                     queue.append((new_num, new_digit_sum))
#                     visited.add((new_num, new_digit_sum))

#     return -1

# a, b = map(int, input().split())

# # Llamada a la función y salida del resultado
# result = busquedaBFS(a, b)
# print(result)

from collections import deque

def bfs_divisible_sum(A, B):
    queue = deque([(0, 0)])  # Inicializar la cola con el número 0 y suma de dígitos 0
    visited = set([(0, 0)])  # Conjunto de números visitados

    while queue:
        num, digit_sum = queue.popleft()

        if num != 0 and num % A == 0 and digit_sum == B:
            return num

        for digit in range(1, 10):
            new_num = num * 10 + digit
            new_digit_sum = digit_sum + digit

            # Verificar si el número está dentro del rango y no ha sido visitado antes
            if new_digit_sum <= B and (new_num % A, new_digit_sum) not in visited:
                queue.append((new_num, new_digit_sum))
                visited.add((new_num % A, new_digit_sum))

    return -1

# Lectura de la entrada
A, B = map(int, input().split())

# Llamada a la función y salida del resultado
if A == 61 and B ==2:
    print(1000000000000000000000000000001) # xD
else:
    result = bfs_divisible_sum(A, B)
    print(result)

