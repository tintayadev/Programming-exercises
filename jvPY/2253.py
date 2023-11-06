def generate_matrix(n):
    # Create an empty matrix filled with zeros
    matrix = [[0 for _ in range(n)] for _ in range(n)]

    for i in range(n):
        for j in range(n):
            # Calculate the minimum distance to the border of the matrix
            min_dist = min(i, j, n - i - 1, n - j - 1)
            # Assign values based on the minimum distance
            matrix[i][j] = min_dist + 1

    for row in matrix:
        print(' '.join(map(str, row)))

n = int(input())
generate_matrix(n)