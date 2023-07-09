# Rumores
# https://jv.umsa.bo/problem.php?id=1003
def solveF(m, x, y, matriz):
    aux_lista = set()
    for _ in range(m):
        if x in matriz:
            aux_lista.add(matriz[x])
            x = matriz[x]
        else:
            break

    if y in aux_lista:
        print("SI")
    else:
        print("NO")

t = int(input())

for _ in range(t):
    n, m = map(int, input().split())

    matriz = {}
    for _ in range(m):
        u, v = map(int, input().split())
        matriz[u] = v

    x, y = map(int, input().split())

    solveF(m, x, y, matriz)
