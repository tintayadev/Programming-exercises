# Trasponer

nodos, arcos = map(int, input().split())
print(nodos, arcos)
l = [[] for i in range(nodos+1)]
for i in range(nodos):
    destino = list(map(int, input().split()))
    peso = list(map(int, input().split()))
    for x, y in enumerate(destino):
        l[y].append((i+1, peso[x]))
for x, y in enumerate(l):
    if x == 0: continue
    destino = [i[0] for i in y]
    peso = [i[1] for i in y]
    if len(destino) == 0:
        print(0)
        print(0)
    else:
        print(*destino)
        print(*peso)