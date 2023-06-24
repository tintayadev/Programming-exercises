# Crucigrama
# https://jv.umsa.bo/problem.php?id=2404

def search_word(grid, word):
    rows = len(grid)
    cols = len(grid[0])

    # Buscar horizontalmente
    for i in range(rows):
        for j in range(cols - len(word) + 1):
            if grid[i][j:j+len(word)] == word:
                return f"{word} ({i}, {j}) -H"

    # Buscar verticalmente
    for i in range(rows - len(word) + 1):
        for j in range(cols):
            column = [grid[x][j] for x in range(i, i+len(word))]
            if column == list(word):
                return f"{word} ({i}, {j}) -V"

    # Buscar en diagonal de izquierda a derecha y de arriba hacia abajo
    for i in range(rows - len(word) + 1):
        for j in range(cols - len(word) + 1):
            diagonal = [grid[i+x][j+x] for x in range(len(word))]
            if diagonal == list(word):
                return f"{word} ({i}, {j}) -D"

    return None


# Lectura del crucigrama
grid = []
cad = input()
grid.append(cad)
for i in range(len(cad)-1):
    line = input().strip()
    if line == "":
        break
    grid.append(line)

# Búsqueda de las palabras
while True:
    try:
        word = input().strip()
        if word == "":
            break
        result = search_word(grid, word)
        print(result)
    except EOFError:
        break
