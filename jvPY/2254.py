def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def generate_matrix(n, m):
    primes = []
    num = 2
    while len(primes) < n * m:
        if is_prime(num):
            primes.append(num)
        num += 1

    matrix = []
    for i in range(n):
        row = []
        for j in range(m):
            row.append(primes[i * m + j])
        matrix.append(row)

    for row in matrix:
        print(' '.join(map(str, row)))

# Example input
n,m = map(int, input().split(" "))
generate_matrix(n, m)
