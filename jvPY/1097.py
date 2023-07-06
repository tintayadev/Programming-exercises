# Enigma
# https://jv.umsa.bo/problem.php?id=1097
import math

def generate_primes(n):
    primes = [True] * (n + 1)
    primes[0] = primes[1] = False

    for i in range(2, int(math.sqrt(n)) + 1):
        if primes[i]:
            for j in range(i * i, n + 1, i):
                primes[j] = False

    return [x for x in range(n + 1) if primes[x]]


def decode_enigma(primes, Y):
    factors = set()
    x = Y

    for prime in primes:
        if prime * prime > x:
            break
        while x % prime == 0:
            factors.add(prime)
            x //= prime

    if x > 1:
        factors.add(x)

    return sum(factors)


# Read the input
T = int(input())
primes = generate_primes(int(math.sqrt(1000000)))

for _ in range(T):
    Y = int(input())
    X = decode_enigma(primes, Y)
    print(X)
