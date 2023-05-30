import math

def es_primo(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

T = int(input())
primos = []

for _ in range(T):
    x = int(input())
    if es_primo(x) and x not in primos:
        primos.append(x)

primos.sort()
print(' '.join(map(str, primos)))
