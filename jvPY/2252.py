def generate_matrix(n):
  """Generates a matrix with the given format, using just lists.

  Args:
    n: The size of the matrix.

  Returns:
    A list of lists representing the matrix.
  """

  matrix = []
  for i in range(n):
    row = []
    for j in range(n):
      if i == 0 or i == n - 1 or j == 0 or j == n - 1:
        row.append(0)
      elif i == j or i == n - j - 1:
        row.append(i * n + j)
      else:
        row.append(0)
    matrix.append(row)
  return matrix

# Example usage:

n = 6
matrix = generate_matrix(n)

# Print the matrix:

for row in matrix:
  print(row)