n, m, d = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

min_element = min(min(row) for row in matrix)
max_element = max(max(row) for row in matrix)

if (max_element - min_element) % d != 0:
    print(-1)
else:
    target = min_element + ((max_element - min_element) // d) * d
    moves = 0
    for row in matrix:
        for element in row:
            diff = abs(element - target)
            if diff % d != 0:
                print(-1)
                exit()
            moves += diff // d
    print(moves)
