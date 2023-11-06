def crear_tablero(row, col):
    t = ""
    for i in range(row):
        for j in range(col):
            if (i + j) % 2 == 0:
                t += "."
            else:
                t += "X"
        t += "\n"
    return t.strip()

while True:
    try:
        row, col = map(int, input().split())
        c = crear_tablero(row, col)
        print(c[::-1])
        print("-" * 10)
    except EOFError:
        break