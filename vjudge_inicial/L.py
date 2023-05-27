'''def count_triplets(N):
    count = 0
    for a in range(1, N+1):
        for b in range(a, N+1):
            for c in range(b, N+1):
                if a * b * c <= N:
                    count += 1
    return count

N = int(input())
result = count_triplets(N)
print(result)'''

def count_triplets(N):
    count = 0

    max_a = int(N ** (1/3))
    max_b = int((N ** 0.5) ** 0.5) + 1

    for a in range(1, max_a + 1):
        for b in range(a, max_b + 1):
            c = int(N / (a * b))
            if c >= b:
                count += 1

    return count

N = int(input())
result = count_triplets(N)
print(result)




