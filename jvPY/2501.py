n = int(input())
lista = [5, 3, 1]
if n <= 3:
    print(*lista[:n])
else:
    i = 1
    while n >= len(lista):
        lista.append((5*i) + 5)
        lista.append((5*i) + 3)
        lista.append((5*i) + 1)
        i += 1
    print(*lista[:n])
